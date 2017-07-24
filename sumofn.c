#include<stdio.h>
void main()
{
int number,i,sum=0;
printf("enter the number");
scanf("%d",&number);
for(i=0;i<=number;i++)
{
sum=sum+i;
}
printf("sum of first %d natural nos. =%d",number,sum);
getch();

}
