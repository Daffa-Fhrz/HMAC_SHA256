`default_nettype none
// -----------------------------------------------------------------------------
// auth_chip_top
// Modul paling atas: hanya sambungan, ditambah penyelaras reset dan pembentuk
// pin `alarm`.
//
// Pemetaan DE10-Nano: lihat README (clk = osilator 50 MHz, rst_n = tombol,
// uart_rx/uart_tx = header GPIO lewat adaptor USB-TTL 3,3 V, tamper_n = sakelar,
// busy/locked/alarm = LED).
// -----------------------------------------------------------------------------
module auth_chip_top #(
    parameter CLK_HZ = 50000000,
    parameter BAUD   = 115200
) (
    input  wire clk,
    input  wire rst_n,
    input  wire uart_rx,
    input  wire tamper_n,

    output wire uart_tx,
    output wire busy,
    output wire locked,
    output wire alarm
);

    // Reset: masuk asinkron, lepas sinkron
    reg [1:0] rst_ff;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) rst_ff <= 2'b00;
        else        rst_ff <= {rst_ff[0], 1'b1};
    end
    wire rst_n_s = rst_ff[1];

    // UART <-> protocol
    wire [7:0] rx_data, tx_data;
    wire       rx_valid, tx_valid, tx_ready;

    // protocol <-> secure_store
    wire [255:0] wr_data;
    wire         key_we, uid_we, lock_set, ctr_incr;
    wire [63:0]  uid;
    wire [31:0]  ctr;
    wire         tamper, ctr_full;

    // secure_store -> hmac_sha256 (satu-satunya jalur kunci)
    wire [255:0] key;

    // protocol <-> hmac_sha256
    wire [127:0] nonce;
    wire         auth_start;
    wire [255:0] tag;
    wire         tag_valid;

    wire [223:0] msg = {uid, nonce, ctr};    // 8 + 16 + 4 = 28 byte

    uart #(.CLK_HZ(CLK_HZ), .BAUD(BAUD)) u_uart (
        .clk(clk), .rst_n(rst_n_s),
        .rx(uart_rx), .tx(uart_tx),
        .rx_data(rx_data), .rx_valid(rx_valid),
        .tx_data(tx_data), .tx_valid(tx_valid), .tx_ready(tx_ready)
    );

    protocol u_protocol (
        .clk(clk), .rst_n(rst_n_s),
        .rx_data(rx_data), .rx_valid(rx_valid),
        .tx_data(tx_data), .tx_valid(tx_valid), .tx_ready(tx_ready),
        .nonce(nonce), .auth_start(auth_start),
        .tag(tag), .tag_valid(tag_valid),
        .wr_data(wr_data),
        .key_we(key_we), .uid_we(uid_we), .lock_set(lock_set), .ctr_incr(ctr_incr),
        .uid(uid), .ctr(ctr),
        .locked(locked), .tamper(tamper), .ctr_full(ctr_full)
    );

    secure_store u_store (
        .clk(clk), .rst_n(rst_n_s),
        .tamper_n(tamper_n),
        .wr_data(wr_data),
        .key_we(key_we), .uid_we(uid_we), .lock_set(lock_set), .ctr_incr(ctr_incr),
        .key(key), .uid(uid), .ctr(ctr),
        .locked(locked), .tamper(tamper), .ctr_full(ctr_full)
    );

    hmac_sha256 #(.MSG_BITS(224)) u_hmac (
        .clk(clk), .rst_n(rst_n_s),
        .start(auth_start),
        .key(key),
        .msg(msg),
        .busy(busy),
        .tag_valid(tag_valid),
        .tag(tag)
    );

    assign alarm = tamper | ctr_full;

endmodule
`default_nettype wire
