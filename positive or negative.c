#include<stdio.h>
void main()
{
int number;
printf("\n enter the number: ");
scanf("%d",&number);
if(number>0)
{
printf("\n the number is positive");
}
else if(number<0)
{
printf("\n the number is negative");
}
else
{
printf("\n the number is zero");
}
getch();
}
