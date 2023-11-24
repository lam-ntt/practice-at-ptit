#include<stdio.h>

long long ucln(long long a, long long b){
	long long i;
	while(a!=0){
		i=a; a=b%a; b=i;
	}
	return b;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long a, b, tmp; scanf("%lld %lld", &a, &b);
		if(a>b){
			tmp=a; a=b; b=tmp;
		}
		printf("%lld %lld\n", a*b/ucln(a, b), ucln(a, b));
	}
	return 0;
}
