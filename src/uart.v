`default_nettype none
// -----------------------------------------------------------------------------
// uart
// 8N1, bit terendah lebih dulu. Tidak tahu apa pun tentang perintah.
// Penerima tidak punya penyangga: pemakai harus mengambil rx_data pada siklus
// rx_valid.
// -----------------------------------------------------------------------------
module uart #(
    parameter CLK_HZ = 50000000,
    parameter BAUD   = 115200
) (
    input  wire       clk,
    input  wire       rst_n,

    input  wire       rx,          // asinkron
    output wire       tx,          // diam di tinggi

    output reg  [7:0] rx_data,
    output reg        rx_valid,    // pulsa 1 siklus

    input  wire [7:0] tx_data,
    input  wire       tx_valid,    // byte diambil saat tx_valid && tx_ready
    output wire       tx_ready
);

    localparam [15:0] DIV  = CLK_HZ / BAUD;   // 434 untuk 50 MHz / 115200
    localparam [15:0] HALF = DIV / 2;

    // ---------------------------- Penerima ----------------------------------
    localparam [2:0] R_IDLE = 3'd0, R_START = 3'd1, R_DATA = 3'd2,
                     R_STOP = 3'd3, R_RECOVER = 3'd4;

    reg rx_s1, rx_s2;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rx_s1 <= 1'b1;
            rx_s2 <= 1'b1;
        end else begin
            rx_s1 <= rx;
            rx_s2 <= rx_s1;
        end
    end

    reg [2:0]  r_state;
    reg [15:0] r_cnt;
    reg [2:0]  r_bit;
    reg [7:0]  r_sh;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            r_state  <= R_IDLE;
            r_cnt    <= 16'd0;
            r_bit    <= 3'd0;
            r_sh     <= 8'd0;
            rx_data  <= 8'd0;
            rx_valid <= 1'b0;
        end else begin
            rx_valid <= 1'b0;
            case (r_state)
                R_IDLE: begin
                    if (!rx_s2) begin               // tepi turun = bit mulai
                        r_cnt   <= 16'd0;
                        r_state <= R_START;
                    end
                end
                R_START: begin                      // periksa lagi di tengah bit mulai
                    if (r_cnt == HALF - 1) begin
                        r_cnt <= 16'd0;
                        if (!rx_s2) begin
                            r_bit   <= 3'd0;
                            r_state <= R_DATA;
                        end else begin
                            r_state <= R_IDLE;      // gangguan
                        end
                    end else begin
                        r_cnt <= r_cnt + 16'd1;
                    end
                end
                R_DATA: begin                       // ambil sampel di tengah tiap bit
                    if (r_cnt == DIV - 1) begin
                        r_cnt <= 16'd0;
                        r_sh  <= {rx_s2, r_sh[7:1]};
                        if (r_bit == 3'd7) r_state <= R_STOP;
                        else               r_bit   <= r_bit + 3'd1;
                    end else begin
                        r_cnt <= r_cnt + 16'd1;
                    end
                end
                R_STOP: begin
                    if (r_cnt == DIV - 1) begin
                        r_cnt <= 16'd0;
                        if (rx_s2) begin            // bit berhenti sah
                            rx_data  <= r_sh;
                            rx_valid <= 1'b1;
                            r_state  <= R_IDLE;
                        end else begin              // bit berhenti salah: buang byte
                            r_state  <= R_RECOVER;
                        end
                    end else begin
                        r_cnt <= r_cnt + 16'd1;
                    end
                end
                R_RECOVER: begin                    // tunggu jalur kembali tinggi
                    if (rx_s2) r_state <= R_IDLE;
                end
                default: r_state <= R_IDLE;
            endcase
        end
    end

    // ---------------------------- Pengirim ----------------------------------
    reg [9:0]  t_sh;      // {stop, data[7:0], start}
    reg [3:0]  t_n;
    reg [15:0] t_cnt;
    reg        t_busy;
    reg        t_out;

    assign tx       = t_out;
    assign tx_ready = ~t_busy;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            t_sh   <= 10'h3FF;
            t_n    <= 4'd0;
            t_cnt  <= 16'd0;
            t_busy <= 1'b0;
            t_out  <= 1'b1;
        end else if (!t_busy) begin
            if (tx_valid) begin
                t_sh   <= {1'b1, tx_data, 1'b0};
                t_n    <= 4'd0;
                t_cnt  <= 16'd0;
                t_busy <= 1'b1;
                t_out  <= 1'b0;                     // bit mulai
            end
        end else begin
            if (t_cnt == DIV - 1) begin
                t_cnt <= 16'd0;
                if (t_n == 4'd9) begin              // bit berhenti selesai
                    t_busy <= 1'b0;
                    t_out  <= 1'b1;
                end else begin
                    t_out <= t_sh[t_n + 4'd1];
                    t_n   <= t_n + 4'd1;
                end
            end else begin
                t_cnt <= t_cnt + 16'd1;
            end
        end
    end

endmodule
`default_nettype wire
