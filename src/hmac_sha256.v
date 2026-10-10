// -----------------------------------------------------------------------------
// hmac_sha256.v
// HMAC-SHA256 (RFC 2104 / FIPS 198-1) untuk kunci 256 bit dan pesan pendek
// berukuran tetap (maksimum 55 byte, sehingga muat dalam satu blok SHA-256).
//
//   inner = SHA256( (K' xor ipad) || msg )
//   tag   = SHA256( (K' xor opad) || inner )
//   K'    = key diisi nol sampai 64 byte
//   ipad  = 64 byte 0x36,  opad = 64 byte 0x5c
//
// Modul ini tidak punya logika hash sendiri. Ia menyusun empat blok 512 bit
// dan mengirimnya berurutan ke core SHA-256 (sha256_tt07):
//
//   fase 0 : blok ipad    (init)  \  hash dalam
//   fase 1 : blok pesan   (next)  /
//   fase 2 : blok opad    (init)  \  hash luar = tag
//   fase 3 : blok inner   (next)  /
//
// Parameter
//   MSG_BITS : panjang pesan dalam bit, kelipatan 8, maksimum 440.
//              Default 224 = UID (8 byte) + nonce (16 byte) + CTR (4 byte).
//
// Cara pakai
//   - Pasang key dan msg, beri pulsa start 1 siklus saat busy = 0.
//   - key dan msg harus stabil selama busy = 1 (tidak disalin ke register
//     lain, supaya tidak ada salinan kunci kedua di dalam chip).
//   - tag_valid berdenyut 1 siklus; tag bertahan sampai start berikutnya.
//
// Latensi: 2593 siklus clock (start -> tag_valid), sekitar 52 mikrodetik
// pada 50 MHz, dan tidak bergantung pada nilai key maupun msg.
// -----------------------------------------------------------------------------
`default_nettype none

module hmac_sha256 #(
    parameter MSG_BITS = 224
) (
    input  wire                clk,
    input  wire                rst_n,
    input  wire                start,
    input  wire [255:0]        key,
    input  wire [MSG_BITS-1:0] msg,       // byte pertama pesan di bit teratas
    output wire                busy,
    output reg                 tag_valid,
    output reg  [255:0]        tag
);

    localparam [1:0] S_IDLE = 2'd0,       // menunggu start
                     S_SEND = 2'd1,       // mengirim satu blok ke core
                     S_WAIT = 2'd2;       // menunggu core selesai

    reg [1:0]   state;
    reg [1:0]   phase;                    // blok ke berapa (0..3)
    reg [255:0] inner;                    // hasil hash dalam

    reg          core_init, core_next;
    wire         core_ready, core_dvalid;
    wire [255:0] core_digest;
    reg  [511:0] core_block;

    assign busy = (state != S_IDLE);

    // ---- penyusunan keempat blok (murni kabel, tanpa register) ----
    // fase 0 dan 2: kunci dipanjangkan dengan nol lalu di-XOR dengan pola
    wire [511:0] blk_ipad  = {key, 256'd0} ^ {64{8'h36}};
    wire [511:0] blk_opad  = {key, 256'd0} ^ {64{8'h5c}};

    // fase 1: pesan + bit '1' + nol + panjang total hash dalam
    //         (64 byte ipad + pesan) dalam bit
    wire [63:0]  len_inner = 64'd512 + MSG_BITS;
    wire [511:0] blk_msg   = {msg, 1'b1, {(447-MSG_BITS){1'b0}}, len_inner};

    // fase 3: inner (32 byte) + bit '1' + nol + panjang total hash luar
    //         (64 byte opad + 32 byte inner) = 768 bit
    wire [511:0] blk_inner = {inner, 1'b1, 191'd0, 64'd768};

    always @(*) begin
        case (phase)
            2'd0:    core_block = blk_ipad;
            2'd1:    core_block = blk_msg;
            2'd2:    core_block = blk_opad;
            default: core_block = blk_inner;
        endcase
    end

    // ---- core SHA-256 ----
    sha256_tt07 u_sha256 (
        .clk          (clk),
        .rst_n        (rst_n),
        .init         (core_init),
        .next         (core_next),
        .block        (core_block),
        .ready        (core_ready),
        .digest_valid (core_dvalid),
        .digest       (core_digest)
    );

    // ---- pengendali ----
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state     <= S_IDLE;
            phase     <= 2'd0;
            inner     <= 256'd0;
            tag       <= 256'd0;
            tag_valid <= 1'b0;
            core_init <= 1'b0;
            core_next <= 1'b0;
        end else begin
            tag_valid <= 1'b0;
            core_init <= 1'b0;
            core_next <= 1'b0;

            case (state)
                S_IDLE: begin
                    if (start) begin
                        phase <= 2'd0;
                        state <= S_SEND;
                    end
                end

                // fase genap (0, 2) memulai hash baru, fase ganjil melanjutkan
                S_SEND: begin
                    if (core_ready) begin
                        core_init <= ~phase[0];
                        core_next <=  phase[0];
                        state     <= S_WAIT;
                    end
                end

                S_WAIT: begin
                    if (core_dvalid) begin
                        if (phase == 2'd1)
                            inner <= core_digest;       // simpan hash dalam

                        if (phase == 2'd3) begin
                            tag       <= core_digest;   // hasil akhir
                            tag_valid <= 1'b1;
                            inner     <= 256'd0;        // hapus nilai antara
                            state     <= S_IDLE;
                        end else begin
                            phase <= phase + 2'd1;
                            state <= S_SEND;
                        end
                    end
                end

                default: state <= S_IDLE;
            endcase
        end
    end

endmodule

`default_nettype wire
