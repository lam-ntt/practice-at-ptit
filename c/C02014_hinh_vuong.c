#include<stdio.h>

int min(int a, int b, int c, int d){
	if(a<=b&&a<=c&&a<=d) return a;
	if(b<=c&&b<=d&&b<=a) return b;
	if(c<=a&&c<=b&&c<=d) return c;
	return d;
}

int main(){
	int a[20][20];
	int n; scanf("%d", &n);
	
	for(int i=0; i<2*n-1; i++){
		for(int j=0; j<2*n-1; j++){
			if(i==0||i==2*n-2||j==0||j==2*n-2){
				a[i][j]=n;
			}
		}
	}
	
	for(int i=1; i<2*n-2; i++){
		for(int j=1; j<2*n-2; j++){
			a[i][j]=n-min(i, j, 2*n-2-i, 2*n-2-j);
		}
	}
		
	for(int i=0; i<2*n-1; i++){
		for(int j=0; j<2*n-1; j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
