#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	int cnt[10005]={0};
	for(int i=0; i<n; i++){
		++cnt[a[i]];
	}
	int ok=0;
	for(int i=0; i<n; i++){
		if(cnt[a[i]]>1){
			printf("%d ", a[i]);
			cnt[a[i]]=0;
			ok=1;
		}
	}
	if(!ok) printf("0\n");
	else printf("\n");
	return 0;
}
