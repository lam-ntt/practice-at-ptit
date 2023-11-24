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
	
	int cnt=1, ok, tmp;
	for(int i=0; i<n-1; i++){
		ok=0;
		for(int j=0; j<n-1; j++){
			if(a[j]>a[j+1]){
				tmp=a[j]; a[j]=a[j+1]; a[j+1]=tmp;
				ok=1;
			}
		}
		if(ok){
			printf("Buoc %d: ", cnt++);
			print(a, n);
		}else break;
	}
	return 0;
}
