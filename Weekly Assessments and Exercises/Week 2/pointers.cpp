#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	char c;
	char *p = &c;     //pointer p points to c
	
	c = 32;
	
	printf ("%d \n", p);     //print address of c 
	printf ("%d \n", *p);	 //print the value of c
	printf ("%d \n", &p);	 //print the address of p
}
