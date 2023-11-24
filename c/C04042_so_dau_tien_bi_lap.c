#include<stdio.h>

int repeat(int a[], int n, int s){
	for(int i=0; i<n; i++){
		if(i!=s&&a[i]==a[s]) return 1;
	}
	return 0;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		
		int ok=0;
		for(int i=0; i<n; i++){
			if(repeat(a, n, i)==1){
				printf("%ld\n", a[i]);
				++ok; break;
			}
		}
		if(ok==0) printf("NO\n");
	}
	return 0;
}
