#include<stdio.h>
int main(){
	int m, n, count = 0;
	printf("\n Enter row and column:");
	scanf("%d%d",&m,&n);
	printf("\n Enter the array element:");
	for(i = 0; i<m; i++){
		for(j = 0; j<n; j++){
			scanf("%d",&a[i][j]);
			count++;
		}
	}
	spiral(m,n,count,a);
	return 0;
}
void spiral(int m, int n, int count, int a[][10]){

	int i , j, l = 0 , c = 0;
	while(l<m && c<n){
		for(i = l; i< n; i++)
		printf("%d",a[l][i]);
		
	}
}
