#include<stdio.h>
int main()
{
char ch;
printf("\n enter the character is alphabet or not");
scanf("%c",&ch);
if((ch>=65&&ch<=90)||(ch>=97&&ch<=120))
{
printf("\n enter the character is alphabet");
}
else
{
printf("\n enter the character is not alphabet");
}
return 0;
}
