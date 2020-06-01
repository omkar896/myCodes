#include <stdio.h>

int main(){
	
	int a [3][3];
	int n, i, j;
	int k = 0;
	printf("\n How many elements::");
	scanf("%d", &n);
	printf("\n Enter the elements::");
	for (i = 0; i<n; i++){
		for(j = 0 ; j<n; j++){
			scanf("%d", *(a+i)+j);
		}
	}
	
	printf("\n u have entered::\n");
	for (i = 0; i<n; i++){

		for(j = 0 ; j<n; j++){
			printf("%u\t", a[k][j]);
		}
		printf("\n");
	}
	printf("%d",*(*(a+1)));
	return 0;
}
