#include<stdio.h>

int max(int a, int b){
	if(a<=b) return b;
	return a;
}

int main(){
	int a[10][10];
	int r, c; scanf("%d %d", &r, &c);
	
	for(int i=0; i<max(r, c); i++){
		a[i][i]=1;
		for(int j=i+1; j<c; j++){
			a[i][j]=a[i][j-1]+1;
		}
		for(int j=i-1; j>=0; j--){
			a[i][j]=a[i][j+1]+1;
		}
	}
	
	if(r>c){
		for(int i=c; i<r; i++){
			a[i][0]=i+1;
			for(int j=1; j<c; j++){
				a[i][j]=a[i][j-1]-1;
			}
		}
	}
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
