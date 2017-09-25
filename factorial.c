#include<stdio.h>
#include<conio.h>
int main()
{
int fact=0,n;
printf("enter the number");
scanf("%d",&n);
if(n<0)
printf("error");
else
{
for(i=1;i<n;i++)
{
fact=fact*i;
}
}
return 0;
}
