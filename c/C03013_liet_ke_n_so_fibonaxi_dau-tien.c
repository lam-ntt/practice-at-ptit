#include<stdio.h>

int add(){
	static long long a=0, b=1, cnt=0;
	if(cnt++%2==0){
		a=a+b;
		return a-b;
	}else{
		b=b+a;
		return b-a;
	}
}

int main(){
	int n; scanf("%d", &n);
	while(n--){
		printf("%lld ", add());
	}
	return 0;
}
