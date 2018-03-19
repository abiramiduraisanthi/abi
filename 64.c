#include <stdio.h>

int main(void) {
	int n,m,p;
	scanf("%d%d",&n,&m);
	p=n+m;
	if(p%2==1)
	{
		printf("odd");
	}
	else
	{
		printf("even");
	}
	return 0;
}
