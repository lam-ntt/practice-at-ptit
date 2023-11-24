#include<stdio.h>

int main(){
	int t; scanf("%ld", &t);
	while(t--){
		int n ; scanf("%ld", &n);
		int a[100005];
		for(int i=0; i<n; i++){
			scanf("%ld", &a[i]);
		}
		
		long long record=0, sum=0;
		for(int i=0; i<n; i++){
			sum+=a[i];
			if(sum<0) sum=0;
			if(sum>record) record=sum;
		}
		printf("%lld\n", record);
	}
	return 0;
}
