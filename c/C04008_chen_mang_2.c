#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	int j=0;
	while(t--){
		int n, m, p; scanf("%d %d %d", &n, &m, &p);
		int a[n+m], b[m];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<m; i++){
			scanf("%d", &b[i]);
		}
		
		for(int i=n-1; i>=p; i--){
			a[i+m]=a[i];
		}
		for(int i=p; i<p+m; i++){
			a[i]=b[i-p];
		}
		
		printf("Test %d: \n", ++j);
		for(int i=0; i<m+n; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}
