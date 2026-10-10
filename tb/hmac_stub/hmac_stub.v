// Stand-in untuk hmac_sha256 (HANYA untuk pengujian blok baru).
// Antarmuka sama dengan README. Tag = key ^ {msg, 32'hA5A5A5A5} setelah 2593 siklus.
// Menandai `bad` jika msg berubah selama busy.
module hmac_sha256 #(parameter MSG_BITS = 224) (
    input  wire clk, input wire rst_n, input wire start,
    input  wire [255:0] key, input wire [MSG_BITS-1:0] msg,
    output reg busy, output reg tag_valid, output reg [255:0] tag
);
    reg [11:0] c;
    reg [MSG_BITS-1:0] msg_l;
    reg bad;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin busy<=0; tag_valid<=0; tag<=0; c<=0; bad<=0; msg_l<=0; end
        else begin
            tag_valid <= 0;
            if (start && !busy) begin busy<=1; c<=0; msg_l<=msg; end
            else if (busy) begin
                if (msg != msg_l) bad <= 1;
                c <= c + 1;
                if (c == 2591) begin
                    busy <= 0; tag_valid <= 1;
                    tag <= key ^ {msg, 32'hA5A5A5A5};
                end
            end
        end
    end
endmodule
