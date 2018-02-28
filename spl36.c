#include<stdio.h>
int main()
{
char s[10];
int i,count=0;
printf("\n enter the string:");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
if((s[i]>='0')&&(s[i]<='9'))
{
count++;
}
}
printf("%d",count);
return 0;
}
