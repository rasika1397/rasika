#include<stdio.h>
#include<conio.h>
void main()
{
int year;
printf("\n enter the year: ");
scanf("%d",&year);
if(year%400==0)
{
printf("%d is leap year",year);
}
else if(year%100==0)
{
printf("%d is not leap year",year);
}
else if(year%4==0)
{
printf("%d is leap year",year);
}
getch();
}
