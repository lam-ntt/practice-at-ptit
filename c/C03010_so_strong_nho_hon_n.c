#include<stdio.h>

int factorial(int n){
	if(n==0||n==1) return 1;
	return n*factorial(n-1);
}

int check(int n){
	int m=n;
	while(n>0){
		m-=factorial(n%10);
		n/=10;
	}
	
	if(m==0) return 1;
	return 0;
}

int main(){
	int n; scanf("%d", &n);
	for(int i=1; i<n; i++){
		if(check(i)) printf("%ld ", i);
	}
	return 0;
}
