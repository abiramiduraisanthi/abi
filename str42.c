#include<stdio.h>
#include<string.h>
int main()
{
char str1[30],str2[30];
int i,j;
printf("\n enter the 1st string:");
scanf("%s",&str1);
printf("\n enter the 2nd string:");
scanf("%s",&str2);
i=strlen(str1);
j=strlen(str2);
if(i>j)
{
printf("%s\n",str1);
}
else
{
printf("%s\n",str2);
}
return 0;
}
