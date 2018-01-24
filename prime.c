#include<stdio.h>
int main()
{
int num,i,count=0;
printf("enter a number");
scanf("%d",&num);
for(i=2;i<=2;i++)
{
if(num%i==0)
{
count++;
break;
}
}
if(num%i==0 && num!=1)
{
printf("%d\n enter the number is prime",num);
}
else
{
printf("%d\n enter the number is not prime",num);
}
return 0;
}
