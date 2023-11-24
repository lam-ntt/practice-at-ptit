#include<stdio.h>

int check(long long n){
	int a[18], i=0, sum=0;
	while(n>0){
		if((n%10)%2==0) return 0;
		a[i++]=n%10;
		sum+=a[i-1];
		n/=10;
	}
	if(sum%2==0) return 0;
	for(int j=0; j<=i/2; j++){
		if(a[j]!=a[i-1-j]) return 0;
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
