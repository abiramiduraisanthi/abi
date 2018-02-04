#include<stdio.h>
int main()
{
int l,f,n,t,result=0,rem;
printf("\nenter the number:");
scanf("%d%d",&l,&f);
printf("%d%d\n enter the number between 2 intervals:",l,f);
for(n=l+1;n<=f;n++)
{
t=n;
while(t!=0)
{
rem=t%10;
result=result+(rem*rem*rem);
t=t/10;
}
if(n==result)
{
printf("%d\n",n);
}
}
return 0;
}
