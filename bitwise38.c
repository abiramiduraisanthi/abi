#include<stdio.h>
int main()
{
int a,b;
printf("\n swaping values:");
scanf("%d%d",&a,&b);
{
  a=a^b;
  b=a^b;
  a=a^b;
}
printf("\n swaping 2 numbers:%d %d",a,b);
return 0;
}
