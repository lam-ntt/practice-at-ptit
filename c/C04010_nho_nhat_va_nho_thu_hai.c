#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	int mn1=a[0];
	for(int i=1; i<n; i++){
		if(a[i]<mn1) mn1=a[i];
	}
	int mn2=1e9;
	for(int i=0; i<n; i++){
		if(a[i]!=mn1&&a[i]<mn2){
			mn2=a[i];
		}
	}
	printf("%d %d", mn1, mn2);
	return 0;
}
