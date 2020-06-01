#include <stdio.h>
int main(){
	char *p[3]={"abc", "def", "xyz"};
	int a = 4, b = 0;
	if(*p[0] != 'a')
	printf("%c",*p[0]);
	//b = a++ + a++ + a-- + a--;
	//printf("value-> %d",b);
	printf("%d, %d, %d", ++a, a++, ++a);
	//printf("%d", ++a + a++ + ++a);
return 0;
}
