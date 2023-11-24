#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		
		int cnt;
		for(int i=0; i<n; i++){
			cnt=0;
			for(int j=i+1; j<n; j++){
				if(a[j]<a[i]) ++cnt;
			}
			if(cnt==n-1-i) printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}
