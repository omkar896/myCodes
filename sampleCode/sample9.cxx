#include <stdio.h>
bool fun(int);
void fun1(int);
bool fun2(int);
int main() {
	int ch, n;
	bool a;
	printf("\n Enter the num:");
	scanf("%d",&n);
	printf("\n which choice?");
	scanf("%d",&ch);
		
	switch (ch){
	case 1:
		a = fun(n);
		if(a == true)
		printf("\n Yes, it is a armstrong num!");
		else	
		printf("\n No, it is not a armstrong num!");
	break;
	case 2:
		fun1(n);
	break;
	case 3:
		a = fun2(n);
		if(a == true)
		printf("\n Yes, it is a palindrom !");
		else	
		printf("\n No, it is not a palindrom !");
	break;
	}
	return 0;
}

bool fun(int n) {
	int r, sum = 0, temp;
	temp = n;
	while (n!=0) {
	r = n%10;
	sum = (r*r*r) + sum;
	n /= 10;	
	}
	if(temp == sum)
		return true;
	else
		return false;			
}

void fun1(int n){
	int a = 0, b = 1, sum = 0;
	while(n--) {
	sum = a + b;
	printf(" %d", a);
	a = b;
	b = sum;
	}
}

bool fun2(int n){
	int remainder, rev , sum = 0;
	int temp = 0;
	temp = n; 
	while (temp!= 0){
	remainder = temp % 10;
	rev = rev*10 + remainder;
	temp /= 10; 
	}
	if(rev == n)
	return true;
	else
	return false;		
}
