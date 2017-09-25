#include<stdio.h>
#include<conio.h>
int main()
{
int number,original number,result=0,n=0;
printf("enter the number:");
scanf("%d",&number);
original number=number;
while(original number!=0)
{
original number /=10;
n++
}
original number=number;
while(original number!=0)
{
remainder=original number%10;
result=result+pow(remainder,n);
original number /=10;
}
if(result==number)
{
printf("the number is armstrong");
}
else
{
printf("the number is not armstrong");
}
return 0;
}
