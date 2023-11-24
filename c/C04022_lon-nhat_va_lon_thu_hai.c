#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[105];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	int mx=a[0];
	for(int i=1; i<n; i++){
		if(a[i]>mx) mx=a[i];
	}
	int mx2=-1e9;
	for(int i=0; i<n; i++){
		if(a[i]!=mx&&a[i]>mx2){
			mx2=a[i];
		}
	}
	
	printf("%d %d", mx, mx2);
	return 0;
}
