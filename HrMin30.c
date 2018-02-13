#include<stdio.h>
int main()
{
int h1,h2,m1,m2,hr,min;
printf("\n enter the 1st term:");
scanf("%d\t%d",&h1,&m1);
printf("\n enter the 2nd term:");
scanf("%d\t%d",&h2,&m2);
hr=h1-h2;
min=m1-m2;
printf("%d\t%d",hr,min);
return 0;
}
