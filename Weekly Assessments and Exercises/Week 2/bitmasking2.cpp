#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	unsigned char a;
	printf ("Please enter a number:  ");        
	scanf ("%d", &a);
	
	a = a&0b11111011;                            // a = a &~ (1<<2) is also have the same operation
	printf ("%d \n", a);						  
	
	return 0;
}
