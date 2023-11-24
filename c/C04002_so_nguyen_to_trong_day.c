#include<stdio.h>
#include<math.h>

int checkPrime(int n){
	if(n==0||n==1) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int tmp;
		for(int i=0; i<n; i++){
			scanf("%d", &tmp);
			if(checkPrime(tmp)){
				printf("%d ", tmp);
			}
		}
		printf("\n");
	}
	return 0;
}
