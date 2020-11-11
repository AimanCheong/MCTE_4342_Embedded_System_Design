#include <stdio.h>
#include <stdlib.h>
#define ROWS 2
#define COLS 5

int main ()
{
	const short m[ROWS][COLS] =
	{
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10}
	};
	
	for (int i=0;i<ROWS;i++)
	{
		for (int j=0;j<COLS;j++)
		{
			printf("%d", m[i][j]);
			if (j==(COLS-1))
			{
				printf("\n");
			}
		}
	}
}
