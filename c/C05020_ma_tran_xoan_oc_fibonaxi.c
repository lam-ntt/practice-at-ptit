#include<stdio.h>
#include<math.h>

long long fibo[100]={0, 1};

void init(){
	for(int i=2; i<=85; i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}

int main(){
	init();
	int n; scanf("%d", &n);
	int left=0, right=n-1, top=0, bottom=n-1;
	long long a[10][10], cnt=0;
	while(1){
		for(int i=left; i<=right; i++){
			a[top][i]=fibo[cnt++];
		}
		++top;
		if(top>bottom) break;
		
		for(int i=top; i<=bottom; i++){
			a[i][right]=fibo[cnt++];
		}
		--right;
		if(left>right) break;
		
		for(int i=right; i>=left; i--){
			a[bottom][i]=fibo[cnt++];
		}
		--bottom;
		if(top>bottom) break;
		
		for(int i=bottom; i>=top; i--){
			a[i][left]=fibo[cnt++];
		}
		++left;
		if(left>right) break;
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%lld ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
