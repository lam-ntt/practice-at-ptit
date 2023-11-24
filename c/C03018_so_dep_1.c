#include<stdio.h>
#include<math.h>

int checkPrime(int n){
	if(n==0||n==1) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int checkFibo(int n){
	int a=0, b=1, cnt=0;
	while(n!=a&&n!=b){
		if(n<a&&n<b) return 0;
		if(cnt++%2==0) a+=b;
		else b+=a;
	}
	return 1;
}

int check(int n){
	if(checkPrime(n)==0) return 0;
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	if(checkFibo(sum)) return 1;
	return 0;
}

int main(){
	int a, b, tmp; scanf("%d %d", &a, &b);
	if(a>b){
		tmp=a; a=b; b=tmp;
	}
	for(int i=a; i<=b; i++){
		if(check(i)) printf("%d ", i);
	}
	return 0;
}
