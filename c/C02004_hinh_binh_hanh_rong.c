#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=n-i; j>=1; j--){
			printf("~");
		}
		if(i==1||i==n){
			for(int j=1; j<=n; j++){
				printf("*");
			}
			printf("\n");
		}else{
			printf("*");
			for(int j=1; j<=n-2; j++){
				printf(".");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
