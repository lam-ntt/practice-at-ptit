#include<stdio.h>
#include<math.h>

int check(long long n){
	int a[20], i=0, sum=0;
	while(n>0){
		a[i++]=n%10;
		sum+=n%10;
		n/=10;
	}
	
	if(sum%10!=0) return 0;
	for(int j=0; j<=i/2; j++){
		if(a[j]!=a[i-1-j]) return 0;
	}
	return 1;
}

int main(){
	int t;  scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		long long a=pow(10, n-1), b=pow(10, n);
		int cnt=0;
		for(long long i=a; i<b; i++){
			if(check(i)) ++cnt;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
