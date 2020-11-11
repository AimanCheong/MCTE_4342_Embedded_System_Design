#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int array[] = {3,4,5,1,9,2,6,7,10,2};
	
	int *p = array;   // p point to array 
	 
	printf("%d \n", *(p));			// value of array[0]
	printf("%d \n", *(p+1));		// value of array[1]
	printf("%d \n", *(p+2));		// value of array[2]
	printf("%d \n", *(p+3));		// value of array[3]
	
	return 0;
}
