#include<stdio.h>

int main(){
	int count = 1;
	for(int i = 1 ; i<5 ; i++)
	{
		for(int j= 5 ; j>i; j--)
		{
			printf(" ");
		}
		for(int k=1 ; k<=((2*i)-1); k++)
		{
			if(k%2!=0){
			printf("%d",count++);
			}
			else 
			printf("*");
		}
		printf("\n");
	}	

return 0;
}
