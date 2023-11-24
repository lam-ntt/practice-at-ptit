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
	int a, b, tmp; scanf("%d %d", &a, &b);
	if(a>b){
		tmp=a; a=b; b=tmp;
	}
	for(int i=a; i<=b; i++){
		if(check(i)) printf("%d ", i);
	}
	return 0;
}
