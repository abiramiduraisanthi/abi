#include<stdio.h>
int main()
{
int i,j,a[100],n,t;
printf("\n enter the element:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i])
}
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[j]>=a[i])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("%d\n",a[i])
return 0;
}
