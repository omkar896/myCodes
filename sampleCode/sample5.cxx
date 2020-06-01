#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
void fun(int a[], int n){
	int sum = 0, j = 0, mid = 0;
	if((n%2)!=0)
	 mid = (n+1)/2;
	else
	 mid = ((n+1)/2)+1;
	for(int i = 1; i <= n; i++) {
		if (i <= mid){
				
			a[i] = (2*i) - 1;
			printf(" %d", a[i]);
		} 	
	else {
			sum = sum + 1;	
			a[i] = ((2*i)-(2*sum))-j;
			printf(" %d",a[i]);
			j = j + 2;
		}
		
	}
}
int main(){
	int *a =(int *)malloc(8*sizeof(int));
	fun(a, 8);
	delete []a;
	return 0;
}
