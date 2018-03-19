#include <stdio.h>

int main(void) {
	char s[50];
	int i;
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	
		if(s[i]>='0'&&s[i]<='1')
		{
		printf("yes");	
		}
		else
		{
			printf("no");
		}
	
	return 0;
}
