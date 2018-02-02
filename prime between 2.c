#include<stdio.h>
int main()
{
int l,f,i,n;
printf("%d%d",&f,&l);
while(l<f)
n=0;
{
for(i=2;i<=l/2;i++)
{
if(l%2==0)
{
n++;
break;
}
if(n==0)
{
printf("%d",l);
l++;
}
}
return 0;
}
