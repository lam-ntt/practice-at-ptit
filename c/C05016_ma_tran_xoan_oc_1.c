#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[105][105];
	int top=0, bottom=n-1, left=0, right=n-1, cnt=1;;
	while(1){
		for(int i=left; i<=right; i++){
			a[top][i]=cnt++;
		}
		++top;
		if(top>bottom) break;
		
		for(int i=top; i<=bottom; i++){
			a[i][right]=cnt++;
		}
		--right;
		if(right<left) break;
		
		for(int i=right; i>=left; i--){
			a[bottom][i]=cnt++;
		}
		--bottom;
		if(top>bottom) break;
		
		for(int i=bottom; i>=top; i--){
			a[i][left]=cnt++;
		}
		++left;
		if(right<left) break;
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
