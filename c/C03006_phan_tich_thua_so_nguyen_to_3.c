#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	int cnt=1;
	while(t--){
		int n; scanf("%d", &n);
		printf("Test %d: ", cnt++);
		int cnt2=0;
		for(int i=2; i<=n; i++){
			cnt2=0;
			while(n%i==0){
				++cnt2;
				n/=i;
			}
			if(cnt2!=0) printf("%d(%d) ", i, cnt2);
		}
		printf("\n");
	}
	return 0;
}
