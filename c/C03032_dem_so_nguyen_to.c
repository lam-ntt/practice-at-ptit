#include<stdio.h>
#include<math.h>

int checkPrime(int n){
	if(n==0||n==1) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int check(int n){
	if(checkPrime(n)==0) return 0;
	while(n>0){
		if(checkPrime(n%10)==0) return 0;
		n/=10;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a, b; scanf("%d %d", &a, &b);
		int cnt=0;
		for(int i=a; i<=b; i++){
			if(check(i)) ++cnt;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
