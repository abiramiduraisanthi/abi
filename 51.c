#include<stdio.h>
int main()
{
int n,a,b,rev=0;
printf("\n enter the number:");
scanf("%d",&n);
while(n!=0)
{
a=n%10;
rev=(rev*10)+a;
n=n/10;
}
while(rev!=0)
{
b=rev%10;
printf("%d\t",b);
rev=rev/10;
}
return 0;
}
