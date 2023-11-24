#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int s; scanf("%d", &s);
	
	for(int i=n-s; i<n; i++){
		printf("%d ", a[i]);
	}
	for(int i=0; i<n-s; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
