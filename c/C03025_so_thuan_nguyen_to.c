#include<stdio.h>
#include<math.h>

int checkPrime2(int n){
	if(n==2||n==3||n==5||n==7) return 1;
	return 0;
}

int checkPrime(int n){
	if(n==0||n==1) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int check(int n){
	int m=n, sum=0;
	while(n>0){
		if(checkPrime2(n%10)==0) return 0;
		sum+=n%10;
		n/=10;
	}
	if(checkPrime(sum)==0) return 0;
	if(checkPrime(m)==0) return 0;
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a, b, tmp; scanf("%d %d", &a, &b);
		if(a>b){
			tmp=a; a=b; b=tmp;
		}
		int cnt=0;
		for(int i=a; i<=b; i++){
			if(check(i)) ++cnt;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
