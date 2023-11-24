#include<stdio.h>

int main(){
	int a[10][10];
	int r, c; scanf("%d %d", &r, &c);
	
	if(r<=c){
		for(int i=0; i<r; i++){
			a[i][c-1-i]=1;
			for(int j=c-i; j<c; j++){
				a[i][j]=a[i][j-1]+1;
			}
			for(int j=c-i-2; j>=0; j--){
				a[i][j]=a[i][j+1]+1;
			}
		}
	}else{
		for(int i=0; i<r-c; i++){
			a[i][0]=r-i;
			for(int j=1; j<c; j++){
				a[i][j]=a[i][j-1]-1;
			}
		}
		
		for(int i=0; i<c; i++){
			a[i+r-c][c-1-i]=1;
			for(int j=c-i; j<c; j++){
				a[i+r-c][j]=a[i+r-c][j-1]+1;
			}
			for(int j=c-i-2; j>=0; j--){
				a[i+r-c][j]=a[i+r-c][j+1]+1;
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
