#include <stdio.h>

int main(void) {
	int i,a[10],max;
	printf("\n enter 10 numbers:");
	scanf("%d",&a[0]);
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<=10;i++)
	if(a[i]>max)
	{
	max=a[i];	
	}
	printf("%d",max);
	return 0;
}
