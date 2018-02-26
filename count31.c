#include<stdio.h>
int main()
{
char string[100];
int i,count=0;
printf("\n enter the string:");
scanf("%[^\n]",&string);
for(i=0;string[i]!='\0';i++)
{
if(string[i]>'0'&&string[i]<='9 ')
{
count++;
}
}
printf("%d",count);
return 0;
}

