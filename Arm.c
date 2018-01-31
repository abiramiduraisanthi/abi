#include<stdio.h>
int main()
{
int n,t,rem,result=0;
printf("\n enter the n value:");
scanf("%d",&n);
t=n;
while(t!=0)
{
rem=t%10;
result=result+rem*rem*rem;
t=t/10;
}
if(result==n)
{
printf("%d\n is Armstrong number:",n);
}
else
{
printf("%d\n is not Armstrong number:",n);
}
return 0;
}
