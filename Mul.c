#include<stdio.h>
int main()
{
int n,i,mul;
printf("enter the n value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
mul=n*i;
printf("%d\t",mul);
}
return 0;
}
