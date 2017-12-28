all:
	gcc -O3 -o hw2_1.out hw2_1.c -lm
	gcc -O3 -o hw2_2.out hw2_2.c

clean:
	rm *.out *.txt
