#include<stdio.h>

void sort(int a[], int n){
	int tmp;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[j]<a[i]){
				tmp=a[i]; a[i]=a[j]; a[j]=tmp;
			}
		}
	}
}

int main(){
	int t; scanf("%d", &t);
	int j=1;
	while(t--){
		int n; scanf("%d", &n);
		int a[n], b[n];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<n; i++){
			scanf("%d", &b[i]);
		}
		
		sort(a, n);
		sort(b, n);

		printf("Test %d: \n", j++);
		for(int i=0; i<n; i++){
			printf("%d %d ", a[i], b[n-1-i]);
		}
		printf("\n");
	}
	return 0;
}
