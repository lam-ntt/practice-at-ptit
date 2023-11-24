#include<stdio.h>

int check(long long n){
	long long a=0, b=1;
	int cnt=0;
	while(n!=a&&n!=b){
		if(n<a&&n<b) return 0;
		if(cnt++%2==0) a=a+b;
		else b=b+a;
	}
	return 1;
}

int main(){
	long long n; scanf("%lld", &n);
	if(check(n)) printf("1");
	else printf("0");
	return 0;
}
