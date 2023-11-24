#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	int cnt=0;
	while(t--){
		int r, c; scanf("%d %d", &r, &c);
		int a[10][10];
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				if(i==0||j==0) scanf("%d ", &a[i][j]);
				else scanf("%d", &a[i-1][j-1]);
			}
		}
		
		printf("Test %d: \n", ++cnt);
		for(int i=0; i<r-1; i++){
			for(int j=0; j<c-1; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
