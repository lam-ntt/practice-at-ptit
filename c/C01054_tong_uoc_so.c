#include<stdio.h>
#include<math.h>

int sumOfPrimeDivisors(int n){
	int sum=0;
	while(n%2==0){
		sum+=2;
		n/=2;
	}
	for(int i=3; i<=sqrt(n); i+=2){
		while(n%i==0){
			sum+=i;
			n/=i;
		}
	}
	
	if(n>2) sum+=n;
	return sum;
}

int main(){
	int t; scanf("%d", &t);
	long long sum=0;
	while(t--){
		int n; scanf("%d", &n);
		sum+=sumOfPrimeDivisors(n);
	}
	printf("%lld", sum);
	return 0;
}
