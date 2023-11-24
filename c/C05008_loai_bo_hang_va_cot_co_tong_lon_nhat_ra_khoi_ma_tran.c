#include<stdio.h>

int mx(int a[], int n){
	int mx=0;
	for(int i=1; i<n; i++){
		if(a[i]>a[mx]) mx=i;
	}
	return mx;
}

int main(){
	int t; scanf("%d", &t);
	int cnt=0;
	while(t--){
		int r, c; scanf("%d %d", &r, &c);
		int a[10][10];
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				scanf("%d", &a[i][j]);
			}
		}

		int b[10], col, row;
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				b[i]+=a[i][j];
			}
		}
		row=mx(b, r);
		for(int i=0; i<r; i++) b[i]=0;
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				if(i!=row) b[j]+=a[i][j];
			}
		}
		col=mx(b, c);
		
		printf("Test %d: \n", ++cnt);
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				if(i==row||j==col) continue;
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
    }
	return 0;
}
