#include<stdio.h>
#include<math.h>

int checkPrime(long long n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

long long check(){
	static long long i=1; ++i;
	while(checkPrime(i)==0){
		++i;
	}
	return i;
}

int main(){
	int n; scanf("%d", &n);
	while(n--){
		printf("%lld\n", check());
	}
	return 0;
}
