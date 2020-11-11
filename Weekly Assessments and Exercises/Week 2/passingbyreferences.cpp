#include <stdio.h>
#include <stdlib.h>

void swap (short *x, short *y)
{
	short temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main ()
{
	short a = 10;
	short b = 13;
	swap (&a,&b);
	
	printf("a = %d, b = %d", a, b);
	return 0;
}


