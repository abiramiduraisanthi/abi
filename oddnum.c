#include<stdio.h>
int main()
{
int f,l,i;
printf("\n enter the two intervels");
scanf("%d%d",&f,&l);
for(i=f;i<=l;i++)
{
if(i%2==1)
{
printf("%d\n enter the intervels is odd number",i);
}
else
{
printf("%d\n enter the intrevels is not odd",i);
}
}
return 0;
}
