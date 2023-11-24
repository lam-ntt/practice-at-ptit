#include<stdio.h>

void print(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	int tmp, idx;
	for(int i=0; i<n-1; i++){
		idx=i;
		for(int j=i+1; j<n; j++){
			if(a[j]<a[idx]) idx=j;
		}
		if(a[i]>a[idx]){
			tmp=a[i]; a[i]=a[idx]; a[idx]=tmp;	
		}
		print(a, n);
	}
	return 0;
}
