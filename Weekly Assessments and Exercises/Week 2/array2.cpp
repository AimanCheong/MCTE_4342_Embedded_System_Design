#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int array[] = {3,4,5,1,9,2,6,7,10,2};
	
	int *p = &array[3];
	
	printf("%d \n", *(p));
	printf("%d \n", *(p+1));
	printf("%d \n", *(p+2));
	printf("%d \n", *(p+3));
	
	return 0;
}
