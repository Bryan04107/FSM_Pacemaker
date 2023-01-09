run:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o main.out main.c mylib.o
	./main.out
clear:
	rm *.out
	rm *.o