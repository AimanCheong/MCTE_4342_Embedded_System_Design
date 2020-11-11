#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int input, case1, case2;
	
	printf("Enter a number (1 or 2 or 3):  ");
	scanf ("%d", &input);
	
	switch (input)
	{
		case 1:
			printf ("Hello");
			break;
			
		case 2:
			printf ("Bye");
			break;
		
		default:
			printf ("Wokay");
			break;
		
	}
}
