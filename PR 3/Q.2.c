#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n;
	printf("enter your num:");
	scanf("%d",&n);
	
	while(n>9)
	{
		n=n/10;
		i++;
	}
	printf(" your %d digit number",i);
}