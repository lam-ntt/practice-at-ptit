#include<stdio.h>

int main(){
	int r, c; scanf("%d %d", &r, &c);
	
	for(int i=1; i<=r; i++){
		for(int j=i-1; j>=1; j--){
			printf("~");
		}
		if(i==1||i==r){
			for(int j=1; j<=c; j++){
				printf("*");
			}
		}else{
			printf("*");
			for(int j=1; j<=c-2; j++){
				printf(".");
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
