test: in_out_put.o
	gfortran in_out_put.o check_subs.f95

in_out_put.o: in_out_put.c
	gcc -c in_out_put.c