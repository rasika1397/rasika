#include<stdio.h>
#include<conio.h>
void main()
{
int number,count;
printf("enter the number");
scanf("%d",&count);
for(count=0;number>0;number=number/10)
{
count=count+1;
}
printf("no.of digits are:%d",count);
getch();
}
