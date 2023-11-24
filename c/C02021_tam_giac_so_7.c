#include<stdio.h>

int add(){
	static int n=0;
	return ++n;
}

int main(){
	int a[30][30];
	int n; scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j++){
			a[j][i]=add();
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
