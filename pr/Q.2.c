#include<stdio.h>
#include<conio.h>

void main()
{
int basesalary,grosssalary,hra,ta,da;
hra=10;
da=5;
ta=8;
printf("enter your basesalary:");
scanf("%d",&basesalary);
  
grosssalary=basesalary+(basesalary*hra)/100+(basesalary*da)/100+(basesalary*ta)/100;
printf("your grosssalary :%d",grosssalary);








}