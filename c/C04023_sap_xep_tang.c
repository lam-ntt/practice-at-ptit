#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[103];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	int tmp;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[j]<a[i]){
				tmp=a[j]; a[j]=a[i]; a[i]=tmp;
			}
		}
	}
	
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
