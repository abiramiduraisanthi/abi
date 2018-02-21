#include<stdio.h>
int main()
{
char a[20];
int i;
printf("\n enter the string:");
scanf("%s",&a);
for(i=0;a[i]!='\0';++i)
{
printf("%d\n total string in character:",i);
}
return 0;
}
