#include<stdio.h>
int main()
{
char spaces[100];
int i,count=0;
printf("\n enter the no.of spaces in a lines:");
scanf("%[^\n]",&spaces);
for(i=0;spaces[i]!='\0';i++)
{
if(spaces[i]==' ')
{
count++;
}
}
printf("%d",count);
return 0;
}
