#include<stdio.h>

int check(long  long n){
	long long a=0, b=1, cnt=0;
	while(n!=a&&n!=b){
		if(n<a&&a<b) return 0;
		if(cnt++%2==0) a=a+b;
		else b=b+a;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
