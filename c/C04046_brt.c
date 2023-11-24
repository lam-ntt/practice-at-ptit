#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	int *x=(int*)a;
	int *y=(int*)b;
	return *x-*y;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		
		qsort(a, n, sizeof(int), cmp);
		long long dis=1e9, cnt=0;
		for(int i=1; i<n; i++){
			if(a[i]-a[i-1]<dis){
				dis=a[i]-a[i-1];
				cnt=1;
			}else if(a[i]-a[i-1]==dis){
				++cnt;
			}
		}
		printf("%lld %lld\n", dis, cnt);
	}
	return 0;
}