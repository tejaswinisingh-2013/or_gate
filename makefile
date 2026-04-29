compile:
	verilator -Wall --binary --trace --timing or_gate.v or_gate_tb.v
run:
	./obj_dir/Vor_gate
all: compile run
