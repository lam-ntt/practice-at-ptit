#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int r, c; scanf("%d %d", &r, &c);
		int a[105][105];
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				scanf("%d", &a[i][j]);
			}
		}
		
		int left=0, right=c-1, top=0, bottom=r-1;
		while(1){
			for(int i=left; i<=right; i++){
				printf("%d ", a[top][i]);
			}
			++top;
			if(top>bottom) break;
			
			for(int i=top; i<=bottom; i++){
				printf("%d ", a[i][right]);
			}
			--right;
			if(left>right) break;
			
			for(int i=right; i>=left; i--){
				printf("%d ", a[bottom][i]);
			}
			--bottom;
			if(top>bottom) break;
			
			for(int i=bottom; i>=top; i--){
				printf("%d ", a[i][left]);
			}
			++left;
			if(left>right) break;
		}
		printf("\n");
	}
	return 0;
}
