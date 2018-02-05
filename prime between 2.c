#include<stdio.h>
int main()
{
int l,h,i,flag,temp;
printf("enter the 2 intervals:");
scanf("%d%d",&l,&h);
if(l>h)
{
temp=l;
l=h;
h=temp;
}
printf("%d%d enter the numbers between 2 intervals are:",l,h); 
while(l<h)
flag=0;
{
for(i=2;i<=l/2;i++)
{
if(l%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d",l);
l++;
}
}
return 0;
}
