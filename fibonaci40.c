#include<stdio.h>
int main()
{
int t1=1,t2=1,nt,n,i;
printf("\n enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d",t1);
nt=t1+t2;
t1=t2;
t2=nt;
}
return 0;
}
