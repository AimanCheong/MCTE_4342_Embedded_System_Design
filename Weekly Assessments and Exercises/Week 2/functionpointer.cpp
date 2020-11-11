#include <stdio.h>
#include <stdlib.h>

int newfunction (char x)
{
	return (x+1);
}

int main()
{
	int (*m)(char) = newfunction;
	
	int value = (*m)(32);
	
	printf("%d",value);
	return 0;
	
}
