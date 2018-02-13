#include<stdio.h>
int main()
{
int n,a[100],i,k;
printf("\n enter the count:");
scanf("%d",&n);
printf("\n enter the element:");
  scanf("%d",&a[i]);
  k=a[i];
for(i=2;i<=n;i++)
{
  scanf("%d",&a[i]);
}
if(a[i]<=k)
{
k=a[i];
}
printf("%d\n",k);
return 0;
}
