#include<stdio.h>
int main()
{
int n,k,a[50],i;
printf("\n enter the number \nenter the k value:");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
if(a[i]==k)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
