#include<stdio.h>
int main()
{
char s[50];
int i,count=1;
printf("\n enter the string:");
scanf("%[^\n]s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
count++;
}
}
printf("%d",count);
return 0;
}
