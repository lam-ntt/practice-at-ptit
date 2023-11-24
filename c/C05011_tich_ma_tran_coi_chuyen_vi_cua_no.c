#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	int cnt=1;
	while(t--){
		int r, c; scanf("%d %d", &r, &c);
		int a[50][50];
		for(int i=0; i<r; i++){
			for(int j=0; j<c;j++){
				scanf("%d", &a[i][j]);
			}
		}
		
		int res[55][55]={0};
		for(int i=0; i<r; i++){
			for(int j=0; j<r; j++){
				for(int k=0; k<c; k++){
					res[i][j]+=a[i][k]*a[j][k];
				}
			}	
		}
		
		printf("Test %d: \n", cnt++);
		for(int i=0; i<r; i++){
			for(int j=0; j<r; j++){
				printf("%d ", res[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
