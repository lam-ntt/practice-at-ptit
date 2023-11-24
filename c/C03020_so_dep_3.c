#include<stdio.h>

int check(long long n){
	int a[10], i=0, sum=0;
	while(n>0){
		a[i++]=n%10;
		sum+=a[i-1];
		n/=10;
	}
	
	if(sum%10!=8) return 0;
	for(int j=0; j<=i/2; j++){
		if(a[j]!=a[i-1-j]) return 0;
	}
	for(int j=0; j<i; j++){
		if(a[j]==6) return 1;
	}
	return 0;
}

int main(){
	long long a, b, tmp; scanf("%lld %lld", &a, &b);
	if(a>b){
		tmp=a; a=b; b=tmp;
	}
	for(long long i=a; i<=b; i++){
		if(check(i)) printf("%lld ", i);
	}
	return 0;
}
