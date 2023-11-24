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
	
	int cnt=1, tmp;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[j]<a[i]){
				tmp=a[i]; a[i]=a[j]; a[j]=tmp;
			}
		}
		printf("Buoc %d: ", cnt++);
		print(a, n);
	}
	return 0;
}
