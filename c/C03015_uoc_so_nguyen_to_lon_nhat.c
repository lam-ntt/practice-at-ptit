#include<stdio.h>
#include<math.h>

int checkPrime(long long n){
	if(n==0||n==1) return 0;
	for(int i=2; i<=sqrt(n);  i++){
		if(n%i==0) return 0;
	}
	return 1;
}

long long check(long long n){
	int sq=(int)sqrt(n);
	for(int i=1; i<=sq; i++){
		if(n%i==0&&checkPrime(n/i)) return n/i;
	}
	for(int i=sq-1; i>=2; i--){
		if(n%i==0&&checkPrime(i)) return i;
	}
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		printf("%lld\n", check(n));
	}
	return 0;
}
