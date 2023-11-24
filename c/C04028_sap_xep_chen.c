#include<stdio.h>

void print(int a[], int s){
	for(int i=0; i<=s; i++){
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
	
	int tmp;
	for(int i=0; i<n; i++){
		for(int j=i-1; j>=0; j--){
			if(a[j]>a[j+1]){
				tmp=a[j]; a[j]=a[j+1]; a[j+1]=tmp;
			}
		}
		printf("Buoc %d: ", i);
		print(a, i);
	}
	return 0;
}
