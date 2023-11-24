#include<stdio.h>
#include<math.h>

int check(int n){
	int i;
	while(n>0){
		i=n%10; n/=10;
		if(i<n%10) return 0;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a=pow(10, n-1);
		int b=pow(10, n);
		for(int i=a; i<b; i++){
			if(check(i)) printf("%ld ", i);
		}
		printf("\n");	
	}
	return 0;
}
