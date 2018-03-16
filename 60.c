#include <stdio.h>

int main(void) {
	int i,n,nt,t1=1,t2=1;
	printf("\nenter the series:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d\t",t1);
		nt=t1+t2;
		t1=t2;
		t2=nt;
		
	}
	return 0;
}
