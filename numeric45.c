#include<stdio.h>
int main()
{
int a,c=0;
printf("\n enter the number:");
scanf("%d",&a);
while(a!=0)
{
a=a/10;
c++;
}
printf("%d\n",c);
}
