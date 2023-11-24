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
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	if(sum%5==0) return 1;
	return 0;
}

int main(){
	int n; scanf("%d", &n);
	int cnt=0;
	for(int i=1; i<n; i++){
		if(check(i)){
			printf("%d ", i);
			++cnt;
		}
	}
	printf("\n%d", cnt);
	return 0;
}
