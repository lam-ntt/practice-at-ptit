#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		
		int cnt=1, cnt2;
		for(int i=1; i<n; i++){
			cnt2=0;
			for(int j=0; j<i; j++){
				if(a[i]>a[j]) ++cnt2;
			}
			if(cnt2==i) ++cnt;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
