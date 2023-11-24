#include<stdio.h>
#include<math.h>

int checkPrime(long long n){
	if(n==0||n==1) return 0;
	for(long long i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long m, n; scanf("%lld %lld", &m, &n);
		long long a=(long long)sqrt(m); if(a*a<m) ++a;
		long long b=(long long)sqrt(n); if(b*b>n) --b;
		long long cnt=0;
		for(long long i=a; i<=b; i++){
			if(checkPrime(i)) ++cnt;
		}
		printf("%lld\n", cnt);
	}
	return 0;
}
