#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	int j=1;
	while(t--){
		int n; scanf("%d", &n);
		int a[20][20];
		int left=0, right=n-1, top=0, bottom=n-1, cnt=n*n;
		while(1){
			for(int i=left; i<=right; i++){
				a[top][i]=cnt--;
			}
			++top;
			if(top>bottom) break;
			
			for(int i=top; i<=bottom; i++){
				a[i][right]=cnt--;
			}
			--right;
			if(left>right) break;
			
			for(int i=right; i>=left; i--){
				a[bottom][i]=cnt--;
			}
			--bottom;
			if(left>right) break;
			
			for(int i=bottom; i>=top; i--){
				a[i][left]=cnt--;
			}
			++left;
			if(top>bottom) break;
		}
		
		printf("Test %d:\n", j++);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
