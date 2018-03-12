#include<stdio.h>
int main()
{
int a[100],i,j,n,t;
printf("\n enter the numbers:");
scanf("%d",&n);
printf("\n enter the array numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("\nsmallest no:%d\nlargest no:%d",a[0],a[n-1]);
return 0;
}
