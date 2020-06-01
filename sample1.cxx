#include<stdio.h>

int main(){
	int n = 0, count = 0, k;
	printf("\n Enter the number:");
	scanf("%d",&k);
	while(n!= 0)
	{
		n=k/10;
		count++;
	}
	printf("\n Num of digit: %d", count);
return 0;
}
