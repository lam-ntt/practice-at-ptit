#include<stdio.h>

int check(long long n){
	int a[18], i=0;
	while(n>0){
		a[i++]=n%10;
		n/=10;
	}
	
	if(a[0]/a[i-1]!=2&&a[0]/a[i-1]!=1/2) return 0;
	for(int j=1; j<=i/2; j++){
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
