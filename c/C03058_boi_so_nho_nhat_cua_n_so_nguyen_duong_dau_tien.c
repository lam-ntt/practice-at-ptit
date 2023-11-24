#include<stdio.h>

long long ucln(long long a, long long b){
	long long tmp;
	while(b!=0){
		tmp=a; a=b; b=tmp%b;
	}
	return a;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		if(n==1){
			printf("1\n");
			continue;
		}

		long long bc=n*(n-1)/ucln(n, n-1);
		for(int i=n-2; i>1; i--){
			bc=bc*i/ucln(bc, i);
		}
		printf("%lld\n", bc);
	}
	return 0;
}

