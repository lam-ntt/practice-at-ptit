#include<stdio.h>

int main(){
	int r, c; scanf("%d %d", &r, &c);
	int a[50][50];
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int r1, r2; scanf("%d %d", &r1, &r2);
	--r1; --r2;

	int tmp;
	for(int i=0; i<c; i++){
		tmp=a[r1][i]; a[r1][i]=a[r2][i]; a[r2][i]=tmp;
	}
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
