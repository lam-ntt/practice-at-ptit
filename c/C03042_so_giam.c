#include<stdio.h>

int check(int n){
	int i;
	while(n>9){
		i=n%10;
		n/=10;
		if(i>=n%10) return 0;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a, b; scanf("%d %d", &a, &b);
		int cnt=0;
		for(int i=a; i<=b; i++){
			if(check(i)) ++cnt;
		}
		printf("%ld\n", cnt);
	}
	return 0;
}
