#include<stdio.h>
int main()
{
int n,a[100],i,k=0;
printf("\n enter the count:");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
  scanf("%d",&a[i]);
if(a[i]>=k)
{
k=a[i];
}
printf("%d\n",k);
}
return 0;
}
