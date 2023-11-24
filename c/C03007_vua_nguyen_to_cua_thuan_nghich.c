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
	
	int a[8], i=0;
	while(n>0){
		a[i++]=n%10;
		n/=10;
	}
	for(int j=0; j<=i/2; j++){
		if(a[j]!=a[i-1-j]) return 0;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a, b; scanf("%d %d", &a, &b);
		int cnt=0;
		for(int i=a; i<=b; i++){
			if(check(i)){
				printf("%d ", i); ++cnt;
				if(cnt!=0&&cnt%10==0) printf("\n");
			}
		}
		printf("\n\n");
	}
	return 0;
}
