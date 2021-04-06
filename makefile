test: in_out_put.o check_subs.o
	gcc check_subs.o in_out_put.o -lgfortran -o test
	

in_out_put.o: in_out_put.c
	gcc -c in_out_put.c
	
check_subs.o: check_subs.f95
	gfortran -c check_subs.f95