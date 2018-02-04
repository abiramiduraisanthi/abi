#include<stdio.h>
int main()
{
int n,i,fact=1;
printf("\n enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d\n factorial of given number:",fact);
return 0;
}
