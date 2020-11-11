#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char z;
	int a = 40;
	int b = 30;
	
	z= (a > b) ? 'c' : 'd';
	
	/*
	if (a > b)
	{
		z = 'c';
	}
	else
	{
		z = 'd';
	}
	*/
	
	printf ("ans = %c", z);
}
