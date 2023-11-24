#include<stdio.h>

int main(){
	int a[30][30];
	int n; scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			a[i][j]=2*j-1;
			printf("%d", a[i][j]);
		}
		for(int j=i-1; j>=1; j--){
			a[i][j]=2*j-1;
			printf("%d", a[i][j]);
		}	
		printf("\n");
	}
	return 0;
}
