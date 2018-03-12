#include<stdio.h>
int main()
{
int n,a[30],i,sum=0;
printf("\n enter thr number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("the avg no is%d",sum/n);
return 0;
}
