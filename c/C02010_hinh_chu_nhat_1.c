#include<stdio.h>

int min(int a, int b){
	if(a<=b) return b;
	return a;
}
int main(){
	int a[10][10];
	int r, c; scanf("%d %d", &r, &c);
	
	for(int i=0; i<min(r, c); i++){
		for(int j=0; j<=c-i; j++){
			a[i][j]=i+j+1;
		}
		for(int j=c-i; j<c; j++){
			a[i][j]=c-j;
		}
	}
		
	if(r>c){
		for(int i=c; i<r; i++){
			a[i][0]=i+1;
			for(int j=1; j<c; j++){
				a[i][j]=c-j;
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
