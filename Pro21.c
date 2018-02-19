#include<stdio.h>
int main()
{
int a,d,n,i,sum=0;
printf("\n enter the count:");
scanf("%d",&n);
printf("\n enter the difference \n enter the first element a:");
scanf("%d%d",&d,&a);
for(i=0;i<=n;i++)
{
sum=sum+a;
a=a+d;  
}
printf("%d",sum);
return 0;
}
