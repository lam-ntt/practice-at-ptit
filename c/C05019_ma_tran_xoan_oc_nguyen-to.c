#include<stdio.h>
#include<math.h>

int checkPrime(int n){
	if(n==0||n==1) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int find(int *n){
	while(checkPrime(*n)==0){
		++*n;
	}
	return *n;
}

int main(){
	int t; scanf("%d", &t);
	int j=1;
	while(t--){
		int n; scanf("%d", &n);
		int a[25][25], left=0, right=n-1, top=0, bottom=n-1, cnt=2;
		while(1){
			for(int i=left; i<=right; i++){
				a[top][i]=find(&cnt);
				++cnt;
			}
			++top;
			if(top>bottom) break;
			
			for(int i=top; i<=bottom; i++){
				a[i][right]=find(&cnt);
				++cnt;
			}
			--right;
			if(left>right) break;
			
			for(int i=right; i>=left; i--){
				a[bottom][i]=find(&cnt);
				++cnt;
			}
			--bottom;
			if(top>bottom) break;
			
			for(int i=bottom; i>=top; i--){
				a[i][left]=find(&cnt);
				++cnt;
			}
			++left;
			if(left>right) break;
		}
		
		printf("Test %d: \n", j++);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
