#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	int cnt=1;
	while(t--){
		int n; scanf("%d", &n);
		int a[20][20]={0};
		for(int i=0; i<n; i++){
			for(int j=0; j<=i; j++){
				a[i][j]=j+1;
			}
		}
		
		int res[20][20]={0};
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				for(int k=0; k<n; k++){
					res[i][j]+=a[i][k]*a[j][k];
				}
			}
		}
		
		printf("Test %d: \n", cnt++);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				printf("%d ", res[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
