#include <stdio.h>
#include <stdlib.h>

int main ()

{
	unsigned char *a = 7;
	
	*a |= 0x80;  //1000 0000
	
	printf("%d", *a);
	
	return 0;
}
