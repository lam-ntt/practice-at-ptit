#include<stdio.h>

int factorial(int n){
	if(n==0||n==1) return 1;
	return n*factorial(n-1);
}

int main(){
	int n; scanf("%d", &n);
	int a[10][10];
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			a[i][j]=factorial(i)/(factorial(j)*factorial(i-j));
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
