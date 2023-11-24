#include<stdio.h>
#include<math.h>

int check(long n){
	int cnt=0;
	for(long i=1; i<=sqrt(n); i++){
		if(n%i==0) cnt+=2;
	}
	if(pow((long)sqrt(n), 2)==n) --cnt;
	return cnt;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		if(n%2==1){
			printf("0\n");
			continue;
		}
		int i=0;
		while(n%2==0){
			++i;
			n/=2;
		}
		printf("%d\n", i*check(n));
	}
	return 0;
}
