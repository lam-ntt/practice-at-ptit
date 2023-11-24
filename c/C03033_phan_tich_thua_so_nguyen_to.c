#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		printf("%d = ", n);
		int cnt2=0;
		for(int i=2; i<=n; i++){
			cnt2=0;
			while(n%i==0){
				++cnt2;
				n/=i;
			}
			if(cnt2!=0) printf("%d^%d", i, cnt2);
            if(cnt2!=0&&n!=1) printf(" * ");
		}
		printf("\n");
	}
	return 0;
}
