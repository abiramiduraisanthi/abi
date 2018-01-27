#include<stdio.h>
int main()
{
int a,b,i;
printf("\n enter the two intervels:");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(i%2==1)
{
printf("d\n enter the intervels are even number:",i);
}
else
{
printf("%d\n enter the intervels are not even number:",i)
}
}
return 0;
}
