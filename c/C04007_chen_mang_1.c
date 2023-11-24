#include<stdio.h>

int main(){
	int n, m ; scanf("%d %d", &n, &m);
	int a[n+m], b[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<m; i++){
		scanf("%d", &b[i]);
	}
	int p; scanf("%d", &p);

	for(int i=n-1; i>=p; i--){
		a[i+m]=a[i];
	}
	for(int i=p; i<p+m; i++){
		a[i]=b[i-p];
	}
	
	for(int i=0; i<m+n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
