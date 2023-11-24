#include<stdio.h>

long long find(int n){
	if(n==1||n==2) return 1;
	int cnt=2; long long a=1, b=1;
	do{
		if(cnt%2==0) a+=b;
		else b+=a;
		++cnt;
		if(cnt==n){
			if(cnt%2==0) return b;
			else return a;
		}
	}while(1);
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		printf("%lld\n", find(n));
	}
	return 0;
	
}
