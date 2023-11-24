#include<stdio.h>

int main(){
	int r, c; scanf("%d %d", &r, &c);
	int a[50][50];
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int c1, c2; scanf("%d %d", &c1, &c2);
	--c1; --c2;
	
	int tmp;
	for(int i=0; i<r; i++){
		tmp=a[i][c1]; a[i][c1]=a[i][c2]; a[i][c2]=tmp;
	}
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
