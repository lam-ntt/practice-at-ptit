#include<stdio.h>

int check(long long n){
	int i;
	while(n>0){
		i=n%10;
		n/=10;
		if(i<n%10) return 0;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		if(check(n)==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
