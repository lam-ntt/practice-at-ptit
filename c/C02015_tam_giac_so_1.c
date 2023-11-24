#include<stdio.h>

int main(){
	int a[30][30];
	int n; scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<2*i+1; j++){
			a[i][j]=j+1;
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
