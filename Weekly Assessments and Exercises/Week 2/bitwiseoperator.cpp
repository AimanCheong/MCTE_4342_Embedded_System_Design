#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	unsigned char a = 90;               //0101 1010
	unsigned char b = 23;				//0001 0111
	unsigned char c ;
	
	c = ~a;               				// NOT operation
	printf ("%d \n", c);				// 1010 0101
	
	c = a&b;							// AND operation
	printf ("%d \n", c);				// 0001 0010
	
	c = a|b;							// OR operation
	printf ("%d \n", c);				// 0101 1111
	
	c = a^b;							// XOR operation
	printf ("%d \n", c);				// 0100 1101
	
	c= b<<2;							// Left Shift
	printf ("%d \n", c);				// 0101 1100
	
	c = a>>3;							// Right Shift
	printf ("%d \n", c);				// 0000 1011
	
	return 0;
	
}
