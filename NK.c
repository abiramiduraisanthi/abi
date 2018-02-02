#include<stdio.h>
int main()
{
int n,k,a[5],i,j,sum=0;
printf("\n enter the no of element in array");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
  printf("\n enter the no of element to be added");
  scanf("%d",&k);
for(j=0;j<=k;j++)
{
sum=sum+a[i];
}
printf("%d\n the sum of value is",sum);
return 0;
}
