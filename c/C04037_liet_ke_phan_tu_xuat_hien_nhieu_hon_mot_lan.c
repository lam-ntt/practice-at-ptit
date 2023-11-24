#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[n], cnt[100005]={0};
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		++cnt[a[i]];
	}
	
	float cnt2=0, tmp;
	for(int i=0; i<n; i++){
		if(cnt[a[i]]>1){
			tmp=(float)cnt[a[i]];
			tmp=tmp-(tmp*tmp-1)/tmp;
			cnt2+=tmp;
		}
	}
	printf("%0.0f\n", cnt2);
	
	for(int i=0; i<n; i++){
		if(cnt[a[i]]>1){
			printf("%d ", a[i]);
			cnt[a[i]]=0;
		}
	}
	return 0;
}
