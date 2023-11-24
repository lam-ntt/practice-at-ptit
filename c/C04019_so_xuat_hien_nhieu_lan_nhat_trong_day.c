#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n], cnt[30005]={0}, mx=-1;
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			++cnt[a[i]];
			if(cnt[a[i]]>mx) mx=cnt[a[i]];
		}
		
		for(int i=0; i<n; i++){
			if(cnt[a[i]]==mx){
				printf("%d ", a[i]);
				cnt[a[i]]=0;
			}
		}
		printf("\n");
	}
	return 0;
}
