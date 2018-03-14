#include<stdio.h>
int main()
{
int n,sum=0,t;
printf("\n enter the numbers:");
scanf("%d",&n);
while(n!=0)
{
t=n%10;
sum=sum+t;
n=n/10;
}
printf("%d\n",sum);
return 0;
}
