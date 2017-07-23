#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("\n enter the alphabet");
scanf("%c",&ch);
if(ch=='a'||ch=='A'|| ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
{
printf("%c is vowel",ch);
}
else
{
printf("%c is consonants",ch);
}
getch();
}
