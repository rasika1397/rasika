#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf(" enter any character: ");
scanf("%c",&ch);
if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
{
printf("the character is an alphabet");
}
else
{
printf("the character is not alphabet");
}
getch();
}
