all:
	gcc -O3 -o hw2_1.out -lm hw2_1.c
	gcc -O3 -o hw2_2.out hw2_2.c

clean:
	rm *.out *.txt
