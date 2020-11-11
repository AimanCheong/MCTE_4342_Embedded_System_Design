#include <stdio.h>
#include <stdlib.h>

int main ()
{
	signed char a;
	printf ("Please enter a number: ");
	scanf ("%d", &a);
	
	if (a & 0b00000100 == 0 )
	{
		printf("LOW");
		
	}
	else
	{
		printf("HIGH");
	}
	
	return 0;
}
