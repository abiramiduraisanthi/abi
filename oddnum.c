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
}
return 0;
}
