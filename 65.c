#include <stdio.h>

int main(void) {
    char s[10];
    scanf("%[^\n]",&s);
   
   if(printf("%s",s))
	return 0;
}
