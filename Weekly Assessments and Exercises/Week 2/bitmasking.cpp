#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	unsigned char a;
	printf ("Please enter a number:  ");        // 0110 0010
	scanf ("%d", &a);
	
	a = a|0b00000100;                            // a = a|(1<<2) is also have the same operation
	printf ("%d \n", a);						 // 0110 0110
	
	return 0;
}
