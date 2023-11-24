#include<stdio.h>

void sort(int a[], int n){
	int tmp; 
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[j]<a[i]){
				tmp=a[i]; a[i]=a[j]; a[j]=tmp;
			}
		}
	}
}

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	int a2[n], j=0;
	for(int i=0; i<n; i++){
		if(a[i]%2==0){
			a2[j++]=a[i];
			a[i]=0;
		}
	}
	
	sort(a, n);
	sort(a2, j);
	
	for(int i=0; i<j; i++){
		printf("%d ", a2[i]);
	}
	for(int i=0; i<n; i++){
		if(a[i]!=0) printf("%d ", a[i]);
	}
	return 0;
}
