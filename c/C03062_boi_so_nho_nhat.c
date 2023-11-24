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
		long long a, b; scanf("%lld %lld", &a, &b);
		if(a==b){
			printf("%d\n", a);
			continue;
		}

		long long bc=b*(b-1)/ucln(b, b-1);
		for(int i=b-2; i>=a; i--){
			bc=bc*i/ucln(bc, i);
		}
		printf("%lld\n", bc);
	}
	return 0;
}