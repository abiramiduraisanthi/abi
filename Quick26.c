#include<stdio.h>
int main()
{
int i,j,k,a[n],n,t;
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
if(a[i]>=a[k])
{
t=a[j];
a[j]=a[k];
a[k]=t;
}
}
}
printf("%d\n",t);
}

