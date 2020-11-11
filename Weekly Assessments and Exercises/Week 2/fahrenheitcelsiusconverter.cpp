#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int fahrenheit;
	int celsius;
	int lower;
	int upper;
	int step;
	
	lower = 0;     // lower limit
	upper = 300;
	step = 20;
	fahrenheit = lower;
	while (fahrenheit <= upper)
		{
			celsius = 5 * (fahrenheit - 32)/9;
			fahrenheit = fahrenheit + step;
			printf("%d F = %d C\n", fahrenheit, celsius);
		}
}
