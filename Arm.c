#include<stdio.h>
#include<conio.h> 
int main()
{
int n,t, rem,result=0;
printf(\n enter the number:"):
scanf("%d"'&n);
t=n;
while(n!=0)
{
rem=n℅10;
result=result+rem*rem*rem;
n=n/10;
}
if(t==result)
{
Prinf("%d" is Armstrong number",n);
}
else
{
printf("%d is not Armstrong number",n);
}
return 0;
}
