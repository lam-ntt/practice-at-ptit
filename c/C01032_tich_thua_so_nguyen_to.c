#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int mul=1;
		for(int i=2; i<=n; i++){
			if(n%i==0) mul*=i;
			while(n%i==0){
				n/=i;
			}
		}
		printf("%d\n", mul);
	}
	return 0;
}
