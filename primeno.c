#include<stdio.h>
void main()
{
int i,n,flag=1;
printf("enter the number: ");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
}
}
if(flag==0)
{
printf("%d is prime number: ");
}
if(flag==1)
{
printf("%d is not prime number: ");
}
getch();
}
