#include<stdio.h>

int main(){
	long long a, b; scanf("%lld %lld", &a, &b);
	printf("%lld \n%lld \n%lld \n%lld \n%lld \n%0.2f", a+b, a-b, a*b, a/b, a%b, (double)a/b);
	return 0;
}
