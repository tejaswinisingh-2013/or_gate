module or_gate_tb;
    logic a, b;
    logic y;
    or_gate dut (
        .a(a),
        .b(b),
        .y(y)
    );

    initial begin
        $display("a b | y");
        $monitor("%0d %0d | %0d", a, b, y);

        // Test cases
        a = 0; b = 0; #10;
        a = 0; b = 1; #10;
        a = 1; b = 0; #10;
        a = 1; b = 1; #10;

        $finish;
    end

endmodule
