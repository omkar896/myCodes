#include<stdio.h>
int main(){
	int n;
	printf("\n Enter the value of n:");
	scanf("%d", &n);
	printf("\nAscii value for %d -> %c \n", n, '\0'+n);
	return 0;	
}
