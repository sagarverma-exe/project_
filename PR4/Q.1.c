#include<stdio.h>
#include<conio.h>

//Q.1 Develop a program that prints the given Right half triangle pattern using a nested for loop.

void main()
{
  int i,j,n=11;
	

	
	for(i=1;i<=5;i++)
	{
		n=41;

		for(j=1;j<=i;j++)
		{
		 	printf(" %d",n );
			n++;
		}
		printf("\n");
	}



}