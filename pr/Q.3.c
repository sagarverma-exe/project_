#include<stdio.h>
#include<conio.h>

void main()
{
	int Anglea,Angleb,Anglec;
	printf("Enter Angle a :");
	
    scanf("%d",&Anglea);
	
    printf("Enter Angle b :");
	
    scanf("%d",&Angleb);
	
	Anglec=180-(Anglea+Angleb);
	
	printf("Anglec = %d",Anglec);
}