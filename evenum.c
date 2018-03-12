#include<stdio.h>
int main()
{
int f,l,i;
printf("\n enter the two intervels:");
scanf("%d%d",&f,&l);
for(i=f;i<=l;i++)
{
if(i%2==1)
{
printf("%d\n enter the intervels are even number:",i);
}
else
{
printf("%d\n enter the intervels are not even number:",i);
}
}
return 0;
}
