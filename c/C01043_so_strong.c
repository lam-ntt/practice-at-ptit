#include<stdio.h>

int factorial(long n){
	if(n==0) return 1;
	return n*factorial(n-1);
}

int main(){
	int n; scanf("%d", &n);
	int i=n;
	while(n>0){
		i-=factorial(n%10);
		n/=10;
	}
	
	if(i==0) printf("1");
	else printf("0");
	return 0;
}
