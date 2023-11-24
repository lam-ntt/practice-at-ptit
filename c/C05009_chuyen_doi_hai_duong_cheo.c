#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[50][50];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	int tmp=0;
	for(int i=0; i<n; i++){
		tmp=a[i][i]; a[i][i]=a[i][n-1-i]; a[i][n-1-i]=tmp;
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
