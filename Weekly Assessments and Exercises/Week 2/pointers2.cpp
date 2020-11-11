#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char c = 5;
	char *p = &c;   // point p to c
	
	c = *p +1;		// increase value of c
	*p += 1;		// increase value of c
	++(*p);			// increase value of c
	(*p)++;			// increase value of c
	
	printf ("%d", c);
}
