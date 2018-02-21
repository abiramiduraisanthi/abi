#include<stdio.h>
int main()
{
int n,t,a[10],i,j,k;
printf("\n enter the count:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(j=1;j<=n;j++)
{
for(k=j+1;k<=n;k++)
{
if(a[j]>=a[k])
{
t=a[j];
a[j]=a[k];
a[k]=t;
}
}
}
printf("%d\n",a[j/2]);
return 0;
}
