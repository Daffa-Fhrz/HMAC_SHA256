`default_nettype none
// -----------------------------------------------------------------------------
// protocol
// Menerjemahkan perintah dari UART menjadi aksi dan menyusun jawaban.
// Tidak menyimpan kunci. Data multi-byte: byte paling berarti lebih dulu.
//
//   GET_UID  0x01  -                 -> 00 + UID(8)
//   AUTH     0x02  nonce(16)         -> 00 + UID(8) + ctr(4) + TAG(32)
//   WRITE_KEY0x10  kunci(32)         -> 00
//   WRITE_UID0x11  UID(8)            -> 00
//   LOCK     0x1F  -                 -> 00
//   status galat (jawaban 1 byte): E1 terkunci/belum dikunci, E2 tamper,
//                                  E3 perintah tidak dikenal, E4 nomor urut habis
//
// Pulsa aksi (key_we, uid_we, lock_set, ctr_incr, auth_start) berupa pulsa
// tepat 1 siklus. Pulsa aksi dikeluarkan secara kombinasional dari S_EXEC
// (yang selalu berlangsung 1 siklus) supaya wr_data masih berisi data saat
// secure_store mengambilnya; register data dihapus pada tepi clock yang sama.
// -----------------------------------------------------------------------------
module protocol #(
    parameter TIMEOUT_CYCLES = 5000000       // 100 ms pada 50 MHz
) (
    input  wire         clk,
    input  wire         rst_n,

    // dari / ke uart
    input  wire [7:0]   rx_data,
    input  wire         rx_valid,
    output wire [7:0]   tx_data,
    output wire         tx_valid,
    input  wire         tx_ready,

    // ke / dari hmac_sha256
    output reg  [127:0] nonce,               // stabil selama HMAC
    output wire         auth_start,
    input  wire [255:0] tag,
    input  wire         tag_valid,

    // ke secure_store
    output wire [255:0] wr_data,
    output wire         key_we,
    output wire         uid_we,
    output wire         lock_set,
    output wire         ctr_incr,

    // dari secure_store
    input  wire [63:0]  uid,
    input  wire [31:0]  ctr,
    input  wire         locked,
    input  wire         tamper,
    input  wire         ctr_full
);

    // Kode perintah dan status
    localparam [7:0] CMD_GET_UID   = 8'h01,
                     CMD_AUTH      = 8'h02,
                     CMD_WRITE_KEY = 8'h10,
                     CMD_WRITE_UID = 8'h11,
                     CMD_LOCK      = 8'h1F;

    localparam [7:0] ST_OK     = 8'h00,
                     ST_LOCKED = 8'hE1,   // sudah terkunci / belum dikunci
                     ST_TAMPER = 8'hE2,
                     ST_BADCMD = 8'hE3,
                     ST_CTRFUL = 8'hE4;

    localparam [2:0] S_CMD  = 3'd0,
                     S_DATA = 3'd1,
                     S_EXEC = 3'd2,
                     S_HMAC = 3'd3,
                     S_RESP = 3'd4;

    reg [2:0]   state;
    reg [7:0]   cmd;
    reg [5:0]   need;          // jumlah byte data yang diharapkan
    reg [5:0]   got;           // jumlah byte data yang sudah diterima
    reg [255:0] data_reg;
    reg [31:0]  timer;
    reg         started;       // auth_start sudah dikeluarkan

    reg [7:0]   resp_status;
    reg [5:0]   resp_len;
    reg [5:0]   resp_idx;

    assign wr_data = data_reg;

    // ------------------- Pemeriksaan izin (kombinasional) ---------------------
    reg [7:0] status;
    always @* begin
        case (cmd)
            CMD_GET_UID:
                status = ST_OK;
            CMD_AUTH:
                if      (tamper)   status = ST_TAMPER;
                else if (!locked)  status = ST_LOCKED;
                else if (ctr_full) status = ST_CTRFUL;
                else               status = ST_OK;
            CMD_WRITE_KEY, CMD_WRITE_UID, CMD_LOCK:
                if      (tamper)   status = ST_TAMPER;
                else if (locked)   status = ST_LOCKED;
                else               status = ST_OK;
            default:
                status = ST_BADCMD;
        endcase
    end

    wire in_exec = (state == S_EXEC);
    wire ok      = (status == ST_OK);

    assign key_we     = in_exec && ok && (cmd == CMD_WRITE_KEY);
    assign uid_we     = in_exec && ok && (cmd == CMD_WRITE_UID);
    assign lock_set   = in_exec && ok && (cmd == CMD_LOCK);
    assign ctr_incr   = in_exec && ok && (cmd == CMD_AUTH);
    // Satu siklus setelah ctr_incr: nomor urut baru sudah ada di `ctr`.
    assign auth_start = (state == S_HMAC) && !started;

    // ------------------------ Byte jawaban (kombinasional) --------------------
    reg [7:0] resp_byte;
    always @* begin
        if (resp_idx == 6'd0)
            resp_byte = resp_status;
        else if (resp_idx <= 6'd8)
            resp_byte = uid[8*(8 - resp_idx) +: 8];
        else if (resp_idx <= 6'd12)
            resp_byte = ctr[8*(12 - resp_idx) +: 8];
        else
            resp_byte = tag[8*(44 - resp_idx) +: 8];
    end

    assign tx_data  = resp_byte;
    assign tx_valid = (state == S_RESP);

    // ------------------------------ FSM ---------------------------------------
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state       <= S_CMD;
            cmd         <= 8'd0;
            need        <= 6'd0;
            got         <= 6'd0;
            data_reg    <= 256'd0;
            nonce       <= 128'd0;
            timer       <= 32'd0;
            started     <= 1'b0;
            resp_status <= 8'd0;
            resp_len    <= 6'd1;
            resp_idx    <= 6'd0;
        end else begin
            case (state)
                // -------------------------------------------------------------
                S_CMD: begin
                    got   <= 6'd0;
                    timer <= 32'd0;
                    if (rx_valid) begin
                        cmd <= rx_data;
                        case (rx_data)
                            CMD_AUTH:      need <= 6'd16;
                            CMD_WRITE_KEY: need <= 6'd32;
                            CMD_WRITE_UID: need <= 6'd8;
                            default:       need <= 6'd0;   // GET_UID, LOCK, tidak dikenal
                        endcase
                        if (rx_data == CMD_AUTH || rx_data == CMD_WRITE_KEY ||
                            rx_data == CMD_WRITE_UID)
                            state <= S_DATA;
                        else
                            state <= S_EXEC;
                    end
                end
                // -------------------------------------------------------------
                S_DATA: begin
                    if (rx_valid) begin
                        data_reg <= {data_reg[247:0], rx_data};
                        got      <= got + 6'd1;
                        timer    <= 32'd0;
                        if (got + 6'd1 == need) state <= S_EXEC;
                    end else begin
                        timer <= timer + 32'd1;
                        if (timer >= TIMEOUT_CYCLES - 1) begin
                            data_reg <= 256'd0;        // buang data terpotong, tanpa jawaban
                            state    <= S_CMD;
                        end
                    end
                end
                // -------------------------------------------------------------
                S_EXEC: begin
                    // pulsa aksi dikeluarkan kombinasional (lihat atas)
                    started     <= 1'b0;
                    resp_idx    <= 6'd0;
                    resp_status <= status;
                    if (ok && cmd == CMD_GET_UID)
                        resp_len <= 6'd9;
                    else if (ok && cmd == CMD_AUTH)
                        resp_len <= 6'd45;
                    else
                        resp_len <= 6'd1;

                    if (ok && cmd == CMD_AUTH)
                        nonce <= data_reg[127:0];
                    data_reg <= 256'd0;                // jangan simpan kunci

                    state <= (ok && cmd == CMD_AUTH) ? S_HMAC : S_RESP;
                end
                // -------------------------------------------------------------
                S_HMAC: begin
                    started <= 1'b1;                   // auth_start hanya di siklus pertama
                    if (tamper) begin
                        resp_status <= ST_TAMPER;
                        resp_len    <= 6'd1;
                        resp_idx    <= 6'd0;
                        state       <= S_RESP;
                    end else if (tag_valid) begin
                        resp_idx <= 6'd0;
                        state    <= S_RESP;
                    end
                end
                // -------------------------------------------------------------
                S_RESP: begin
                    if (tx_ready) begin                // uart mengambil byte ini
                        if (resp_idx == resp_len - 6'd1) begin
                            state <= S_CMD;
                        end else begin
                            resp_idx <= resp_idx + 6'd1;
                        end
                    end
                end
                default: state <= S_CMD;
            endcase
        end
    end

endmodule
`default_nettype wire
