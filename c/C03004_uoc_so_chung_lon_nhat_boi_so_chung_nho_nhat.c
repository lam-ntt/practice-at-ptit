#include<stdio.h>

int main(){
	long long a, b; scanf("%lld %lld",&a, &b);
	long long a2=a, b2=b, i;
	if(a>b){
		i=a; a=b; b=i;
	}
	while(a!=0){
		i=a;
		a=b%a;
		b=i;
	}
	printf("%lld \n%lld", b, a2*b2/b);
	return 0;
}
