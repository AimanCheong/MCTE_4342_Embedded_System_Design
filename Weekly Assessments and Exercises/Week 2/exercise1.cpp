#include <stdio.h>

int main()
{    
	int n,i,m=0, flag;   
	do
	{
		flag = 0;                                 //reset the flag
		printf("Enter a number: ");    
		scanf("%d",&n);
		if (n<0)
		{
			printf ("Is a negative number. Exit program");
			break;
		}   
		 
		m=n/2;    
		for(i=2;i<=m;i++)    
		{    
			if(n%i==0)    
			{    
				printf("Not a prime number\n");    
				flag = 1;    
				break;    
			}    
		}		    
		
		if (flag == 0)
		{
			printf("Is a prime number\n");     
		}
	}while(n>=0);
	
	
	return 0;
 }   
