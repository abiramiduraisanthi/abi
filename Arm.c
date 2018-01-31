#include<stdio.h>
int main()
{
int n,t,rem,result=0;
printf("\n enter n value:");
scanf("%d",&n);
t=n;
while(t!=0)
{
rem=n%10;
result=result+rem*rem*rem;
t=t/10;
}
if(result=n)
{
prinf("%d is Armstrong number:",n);
}
else
{
printf("%d is not Armstrong number:",n);
}
return 0;
}
