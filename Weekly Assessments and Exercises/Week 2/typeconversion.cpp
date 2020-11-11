#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char c;
	short s;
	
	s = 86;
	printf ("Before conversion: %d \n", s);
	
	c = (char) s;									//convert s into char
	printf ("After conversion: %c \n", c);
	
	s = (short) c;       							//convert c into short
	printf("Retract conversion: %d \n", s);
	
	return 0;
}
