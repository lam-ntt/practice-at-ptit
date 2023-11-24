#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[n], cnt[100005]={0};
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		++cnt[a[i]];
	}
	
	int cnt2=0;
	for(int i=0; i<n; i++){
		if(cnt[a[i]]==1) ++cnt2;
	}
	printf("%d\n", cnt2);
	for(int i=0; i<n; i++){
		if(cnt[a[i]]==1) printf("%d ", a[i]);
	}
	return 0;
}
