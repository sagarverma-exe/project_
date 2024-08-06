#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	
	printf("enter your age:");
	scanf("%d",&age);
	
	if(18>=age)
	{
		printf("you are eligible for vote");
	}
	else if(100<=age)
	{
		printf("you are not eligible for vote");
	}
	else
	{
		printf("you are not eligible for vote");
	}
	
}