// -----------------------------------------------------------------------------
// sha256_tt07.v
// Core SHA-256 lengkap yang dibangun di atas baseline TT07 "tiny sha256"
// (tt_um_xeniarose_sha256), yang dipakai TANPA perubahan.
//
// Baseline hanya menyediakan:
//   - 10 register 32 bit (A..H, W, K) yang diakses per byte lewat bus 8 bit
//   - satu ronde kompresi SHA-256 saat alamat 63 ditulis
// Modul ini menambahkan semua yang belum ada di baseline:
//   - tabel konstanta K[0..63]
//   - jadwal pesan (message schedule) W[0..63]
//   - nilai awal (IV), register hash berjalan, dan penjumlahan akhir
//   - FSM yang mengemudikan bus baseline untuk satu blok penuh
//
// Antarmuka sama persis dengan sha256_core.v, jadi keduanya bisa ditukar.
//
// Peta bus baseline (ui_in = {strobe, baca, alamat[5:0]}):
//   alamat 0..31  : register A..H, 4 byte per register, byte rendah dulu
//   alamat 32..35 : register W
//   alamat 36..39 : register K
//   alamat 63     : tulis = jalankan satu ronde
//
// Latensi: 646 siklus per blok 512 bit (pulsa init/next -> digest_valid):
//   32 (muat A..H) + 64 x 9 (W, K, pemicu) + 33 (baca A..H) + 4 (hapus W) + 1
// -----------------------------------------------------------------------------
`default_nettype none

module sha256_tt07 (
    input  wire         clk,
    input  wire         rst_n,
    input  wire         init,          // mulai pesan baru (state = IV)
    input  wire         next,          // lanjutkan pesan (state = digest terakhir)
    input  wire [511:0] block,         // blok 512 bit, byte pertama di [511:504]
    output wire         ready,
    output reg          digest_valid,
    output wire [255:0] digest
);

    localparam [255:0] IV = {
        32'h6a09e667, 32'hbb67ae85, 32'h3c6ef372, 32'ha54ff53a,
        32'h510e527f, 32'h9b05688c, 32'h1f83d9ab, 32'h5be0cd19
    };

    localparam [2:0] S_IDLE = 3'd0, S_LOAD = 3'd1, S_ROUND = 3'd2,
                     S_READ = 3'd3, S_WIPE = 3'd4;

    reg [2:0]   state;
    reg [5:0]   t;                     // nomor ronde 0..63
    reg [5:0]   cnt;                   // penghitung langkah dalam satu state
    reg [255:0] h_reg;                 // nilai hash berjalan H0..H7
    reg [511:0] w_reg;                 // jendela 16 word; W[t] ada di [511:480]
    reg [23:0]  rd_sr;                 // penampung 3 byte pertama saat membaca

    assign ready  = (state == S_IDLE);
    assign digest = h_reg;

    // ---- konstanta ronde K[t] ----
    function [31:0] k_const;
        input [5:0] i;
        begin
            case (i)
                6'd0:  k_const = 32'h428a2f98; 6'd1:  k_const = 32'h71374491;
                6'd2:  k_const = 32'hb5c0fbcf; 6'd3:  k_const = 32'he9b5dba5;
                6'd4:  k_const = 32'h3956c25b; 6'd5:  k_const = 32'h59f111f1;
                6'd6:  k_const = 32'h923f82a4; 6'd7:  k_const = 32'hab1c5ed5;
                6'd8:  k_const = 32'hd807aa98; 6'd9:  k_const = 32'h12835b01;
                6'd10: k_const = 32'h243185be; 6'd11: k_const = 32'h550c7dc3;
                6'd12: k_const = 32'h72be5d74; 6'd13: k_const = 32'h80deb1fe;
                6'd14: k_const = 32'h9bdc06a7; 6'd15: k_const = 32'hc19bf174;
                6'd16: k_const = 32'he49b69c1; 6'd17: k_const = 32'hefbe4786;
                6'd18: k_const = 32'h0fc19dc6; 6'd19: k_const = 32'h240ca1cc;
                6'd20: k_const = 32'h2de92c6f; 6'd21: k_const = 32'h4a7484aa;
                6'd22: k_const = 32'h5cb0a9dc; 6'd23: k_const = 32'h76f988da;
                6'd24: k_const = 32'h983e5152; 6'd25: k_const = 32'ha831c66d;
                6'd26: k_const = 32'hb00327c8; 6'd27: k_const = 32'hbf597fc7;
                6'd28: k_const = 32'hc6e00bf3; 6'd29: k_const = 32'hd5a79147;
                6'd30: k_const = 32'h06ca6351; 6'd31: k_const = 32'h14292967;
                6'd32: k_const = 32'h27b70a85; 6'd33: k_const = 32'h2e1b2138;
                6'd34: k_const = 32'h4d2c6dfc; 6'd35: k_const = 32'h53380d13;
                6'd36: k_const = 32'h650a7354; 6'd37: k_const = 32'h766a0abb;
                6'd38: k_const = 32'h81c2c92e; 6'd39: k_const = 32'h92722c85;
                6'd40: k_const = 32'ha2bfe8a1; 6'd41: k_const = 32'ha81a664b;
                6'd42: k_const = 32'hc24b8b70; 6'd43: k_const = 32'hc76c51a3;
                6'd44: k_const = 32'hd192e819; 6'd45: k_const = 32'hd6990624;
                6'd46: k_const = 32'hf40e3585; 6'd47: k_const = 32'h106aa070;
                6'd48: k_const = 32'h19a4c116; 6'd49: k_const = 32'h1e376c08;
                6'd50: k_const = 32'h2748774c; 6'd51: k_const = 32'h34b0bcb5;
                6'd52: k_const = 32'h391c0cb3; 6'd53: k_const = 32'h4ed8aa4a;
                6'd54: k_const = 32'h5b9cca4f; 6'd55: k_const = 32'h682e6ff3;
                6'd56: k_const = 32'h748f82ee; 6'd57: k_const = 32'h78a5636f;
                6'd58: k_const = 32'h84c87814; 6'd59: k_const = 32'h8cc70208;
                6'd60: k_const = 32'h90befffa; 6'd61: k_const = 32'ha4506ceb;
                6'd62: k_const = 32'hbef9a3f7; 6'd63: k_const = 32'hc67178f2;
                default: k_const = 32'h0;
            endcase
        end
    endfunction

    // ---- jadwal pesan (message schedule) ----
    wire [31:0] w0  = w_reg[511:480];  // W[t]
    wire [31:0] w1  = w_reg[479:448];  // W[t+1]
    wire [31:0] w9  = w_reg[223:192];  // W[t+9]
    wire [31:0] w14 = w_reg[63:32];    // W[t+14]

    wire [31:0] sig0  = {w1[6:0],   w1[31:7]}   ^ {w1[17:0],  w1[31:18]}  ^ (w1  >> 3);
    wire [31:0] sig1  = {w14[16:0], w14[31:17]} ^ {w14[18:0], w14[31:19]} ^ (w14 >> 10);
    wire [31:0] w_new = sig1 + w9 + sig0 + w0;  // W[t+16]

    // ---- bus ke baseline ----
    reg        bus_stb;                // ui_in[7]: "IO clock"
    reg        bus_rd;                 // ui_in[6]: 1 = baca, 0 = tulis
    reg  [5:0] bus_addr;               // ui_in[5:0]
    reg  [7:0] bus_wdata;
    wire [7:0] bus_rdata;
    wire [7:0] tt_uo_out;              // tidak dipakai
    wire [7:0] tt_uio_oe;              // tidak dipakai

    wire [7:0]  h_base = {~cnt[4:2], 5'd0};          // (7 - nomor register) x 32
    wire [31:0] h_word = h_reg[h_base +: 32];        // register ke-cnt[4:2]
    wire [31:0] k_word = k_const(t);
    wire [4:0]  b_base = {cnt[1:0], 3'd0};           // nomor byte x 8

    always @(*) begin
        bus_stb   = 1'b0;
        bus_rd    = 1'b0;
        bus_addr  = 6'd0;
        bus_wdata = 8'd0;
        case (state)
            S_LOAD: begin                           // tulis H0..H7 ke A..H
                bus_stb   = 1'b1;
                bus_addr  = {1'b0, cnt[4:0]};
                bus_wdata = h_word[b_base +: 8];
            end
            S_ROUND: begin
                bus_stb = 1'b1;
                if (cnt[3]) begin                   // langkah 8: jalankan ronde
                    bus_addr = 6'd63;
                end else if (!cnt[2]) begin         // langkah 0..3: tulis W
                    bus_addr  = {4'b1000, cnt[1:0]};
                    bus_wdata = w0[b_base +: 8];
                end else begin                      // langkah 4..7: tulis K
                    bus_addr  = {4'b1001, cnt[1:0]};
                    bus_wdata = k_word[b_base +: 8];
                end
            end
            S_READ: begin                           // baca A..H
                bus_rd   = 1'b1;
                bus_stb  = ~cnt[5];
                bus_addr = {1'b0, cnt[4:0]};
            end
            S_WIPE: begin                           // tulis nol ke W
                bus_stb  = 1'b1;
                bus_addr = {4'b1000, cnt[1:0]};
            end
            default: ;
        endcase
    end

    tt_um_xeniarose_sha256 u_tt07 (
        .ui_in   ({bus_stb, bus_rd, bus_addr}),
        .uo_out  (tt_uo_out),
        .uio_in  (bus_wdata),
        .uio_out (bus_rdata),
        .uio_oe  (tt_uio_oe),
        .ena     (1'b1),
        .clk     (clk),
        .rst_n   (rst_n)
    );

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state        <= S_IDLE;
            t            <= 6'd0;
            cnt          <= 6'd0;
            h_reg        <= IV;
            w_reg        <= 512'd0;
            rd_sr        <= 24'd0;
            digest_valid <= 1'b0;
        end else begin
            digest_valid <= 1'b0;

            case (state)
                S_IDLE: begin
                    if (init || next) begin
                        w_reg <= block;
                        t     <= 6'd0;
                        cnt   <= 6'd0;
                        state <= S_LOAD;
                        if (init)
                            h_reg <= IV;
                    end
                end

                S_LOAD: begin
                    cnt <= cnt + 6'd1;
                    if (cnt == 6'd31) begin
                        cnt   <= 6'd0;
                        state <= S_ROUND;
                    end
                end

                S_ROUND: begin
                    cnt <= cnt + 6'd1;
                    if (cnt == 6'd8) begin
                        cnt   <= 6'd0;
                        w_reg <= {w_reg[479:0], w_new};
                        t     <= t + 6'd1;
                        if (t == 6'd63)
                            state <= S_READ;
                    end
                end

                // Data baca keluar dari baseline satu siklus setelah alamat
                // diberikan: pada langkah k tersedia byte ke-(k-1).
                S_READ: begin
                    cnt <= cnt + 6'd1;
                    if (cnt != 6'd0) begin
                        if (cnt[1:0] == 2'd0) begin
                            // word lengkap: H[i] = H[i] + nilai kerja, lalu putar
                            h_reg <= {h_reg[223:0],
                                      h_reg[255:224] + {bus_rdata, rd_sr}};
                            rd_sr <= 24'd0;
                        end else begin
                            rd_sr <= {bus_rdata, rd_sr[23:8]};
                        end
                    end
                    if (cnt == 6'd32) begin
                        cnt   <= 6'd0;
                        state <= S_WIPE;
                    end
                end

                S_WIPE: begin
                    cnt <= cnt + 6'd1;
                    if (cnt == 6'd3) begin
                        cnt          <= 6'd0;
                        w_reg        <= 512'd0;
                        digest_valid <= 1'b1;
                        state        <= S_IDLE;
                    end
                end

                default: state <= S_IDLE;
            endcase
        end
    end

endmodule

`default_nettype wire