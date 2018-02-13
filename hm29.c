#include<stdio.h>
int main()
{
int t,hr,min;
scanf("%d",&t);
if(t<60)
{
printf("0%d\n",t);
}
if(t>60)
{
hr=t/60;
min=t%60;
printf("%d\t%d",hr,min)
}
return 0;
}
