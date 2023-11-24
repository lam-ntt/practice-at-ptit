#include<stdio.h>

int main(){
	long long n; scanf("%lld", &n);
	long long m=n;
	int a[20]={0}, i=0;
	while(n>0){
		a[i++]=n%10;
		n/=10;
	}

	int cnt[10]={0};
	for(int j=0; j<=i; j++){
		++cnt[a[j]];
	}
	
	for(int j=i-1; j>=0; j--){
		if(a[j]==2||a[j]==3||a[j]==5||a[j]==7){
			if(cnt[a[j]]!=0){
				printf("%d %d\n", a[j], cnt[a[j]]);
				cnt[a[j]]=0;
			}
		}
	}
	
	return 0;
}
