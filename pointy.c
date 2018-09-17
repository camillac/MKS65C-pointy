#include <stdio.h>

int main() {
	//Declares and initializes an unsigned int to some value > 2.1 billion.
	unsigned int x = 2112314153;
	
	//Declare a char * that points to the address of your unsigned int.
	char * pointer = &x;
	unsigned int * p = &x;
	
	//Print out your int in hex. 
	printf("int: %u \nhex: %x \np = %p\n\n", x, x, p);
	
	//Use your pointer to print out each individual byte of your int.
	for (int num = 0; num < sizeof(x); num++) {
		printf("pointer:%c \np-hex: %hhx\n\n", pointer, pointer);
		pointer++;
	}
	
	// Using your pointer, modify the individual bytes of your int and print out the resulting value in hex and decimal after each modification.
	// Increment each byte by 1
	printf("ORIGINAL\nint: %u\nhex: %x\n\n", x, x);
	char * point = &x;
	for (int num = 0; num < sizeof(x); num++) {
		*point += 1;
		point++;
	}
	
	printf("MODIFIED BY 1\nint: %u\nhex: %x\n\n", x, x);
	
	// Increment each byte by 16
	unsigned int n = 2112314153;
	printf("ORIGINAL\nint: %u\nhex: %x\n\n", n, n);
	
	char * point16 = &n;
	for (int num = 0; num < sizeof(n); num++) {
		*point16 += 16;
		point16++;
	}
	
	printf("MODIFIED BY 16\nint: %u\nhex: %x\n\n", n, n);
	return 0;
}