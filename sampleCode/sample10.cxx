#include<stdio.h>
int main(){
	int i, j, n = 5;
	for(i = 0; i<n; i++){
		for(j = n; j>i; j--)
		{
			printf(" ");			
		}
		for(j = 0; j<i; j++)
		{
			if(j == 0 || i == 0)
				printf("%d", 1);
		}
	printf("\n");	
	}
return 0;
}
