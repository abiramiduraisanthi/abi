#include<stdio.h>
int main()
{
int n,i,max,a[10];
printf("\n enter the count:");
scanf("%d",&n);
  printf("\n enter the elements:");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
  max=a[0];
  for(i=0;i<=n;i++)
      {
if(max<a[i])
{
max=a[i];
}
      
    }
printf("%d maximum element is:",max);
return 0;
}
