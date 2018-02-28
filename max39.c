#include<stdio.h>
int main()
{
int i,max,a[10];
printf("\n enter 10 numbers:");
scanf("%d",&a[0]);
max=a[0];
for(i=1;i<=10;i++)
{
scanf("%d",&a[i]);
if(a[i]>max)
max=a[i];
}
printf("%d",max);
return 0;
}
