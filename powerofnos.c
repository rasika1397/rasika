#include<stdio.h>
void main()
{
int base,exponent,ans;
printf("enter the base:");
scanf("%d",&base);
printf("enter the exponent:");
scanf("%d",&exponent);
ans=pow(base,exponent);
printf("the value of base^exponent is:%d",ans)
getch();
}
