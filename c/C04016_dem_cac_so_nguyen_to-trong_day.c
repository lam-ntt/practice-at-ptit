#include<stdio.h>
#include<math.h>

int checkPrime(int n){
	if(n==0||n==1) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t; scanf("%d", &t);
	int j=0;
	while(t--){
		int n; scanf("%d", &n);
		int a[n], cnt[100005]={0};
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			++cnt[a[i]];
		}
		
		printf("Test %d: \n", ++j);
		for(int i=2; i<=100000; i++){
			if(cnt[i]!=0&&checkPrime(i)) printf("%d xuat hien %d lan\n", i, cnt[i]);
		}
	}
	return 0;
}
