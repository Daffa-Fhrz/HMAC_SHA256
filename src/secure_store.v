`default_nettype none
// -----------------------------------------------------------------------------
// secure_store
// Menyimpan kunci, UID, bit kunci permanen, nomor urut, dan status tamper.
// Satu-satunya blok yang memegang kunci; kunci hanya keluar lewat port `key`
// (sambungkan HANYA ke hmac_sha256).
//
// Semua pulsa kendali (key_we, uid_we, lock_set, ctr_incr) berupa pulsa 1 siklus.
// Perintah tulis yang syaratnya tidak terpenuhi diabaikan tanpa efek.
// -----------------------------------------------------------------------------
module secure_store (
    input  wire         clk,
    input  wire         rst_n,        // aktif rendah
    input  wire         tamper_n,     // sensor pembongkaran, aktif rendah, asinkron

    input  wire [255:0] wr_data,      // data tulis; UID memakai 64 bit terendah
    input  wire         key_we,
    input  wire         uid_we,
    input  wire         lock_set,
    input  wire         ctr_incr,

    output wire [255:0] key,
    output wire [63:0]  uid,
    output wire [31:0]  ctr,
    output wire         locked,
    output wire         tamper,       // terkunci sampai reset
    output wire         ctr_full
);

    reg [255:0] key_reg;
    reg [63:0]  uid_reg;
    reg [31:0]  ctr_reg;
    reg         lock_reg;
    reg         tamper_reg;

    // Penyelaras dua flip-flop untuk tamper_n. Nilai reset = 1 (tidak aktif)
    // supaya pelepasan reset tidak dianggap tamper.
    reg tamper_s1, tamper_s2;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            tamper_s1 <= 1'b1;
            tamper_s2 <= 1'b1;
        end else begin
            tamper_s1 <= tamper_n;
            tamper_s2 <= tamper_s1;
        end
    end

    wire tamper_hit = ~tamper_s2;
    assign ctr_full = (ctr_reg == 32'hFFFFFFFF);

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            key_reg    <= 256'd0;
            uid_reg    <= 64'd0;
            ctr_reg    <= 32'd0;
            lock_reg   <= 1'b0;
            tamper_reg <= 1'b0;
        end else begin
            // Tamper: kunci dihapus pada siklus yang sama; menang atas key_we.
            if (tamper_hit) begin
                tamper_reg <= 1'b1;
                key_reg    <= 256'd0;
            end else if (key_we && !lock_reg && !tamper_reg) begin
                key_reg    <= wr_data;
            end

            if (uid_we && !lock_reg && !tamper_reg && !tamper_hit)
                uid_reg <= wr_data[63:0];

            if (lock_set && !tamper_reg && !tamper_hit)
                lock_reg <= 1'b1;           // tidak pernah kembali ke 0 (kecuali reset)

            if (ctr_incr && !ctr_full)
                ctr_reg <= ctr_reg + 32'd1;
        end
    end

    assign key    = key_reg;
    assign uid    = uid_reg;
    assign ctr    = ctr_reg;
    assign locked = lock_reg;
    assign tamper = tamper_reg;

endmodule
`default_nettype wire
