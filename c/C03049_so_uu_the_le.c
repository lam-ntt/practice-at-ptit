#include<stdio.h>

int check(long long n){
	int d=0;
	while(n>0){
		if(n%10%2==0) ++d;
		else --d;
		n/=10;
	}
	if(d<0) return 1;
	return 0;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		if(n%2==1&&check(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
