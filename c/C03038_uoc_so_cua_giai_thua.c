#include<stdio.h>
#include<math.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, p; scanf("%d %d", &n, &p);
		int end=(int)(log(n)/log(p));
		
		int cnt=0;
		for(int i=1; i<=end; i++){
			for(int j=1; j<=n; j++){
				if(j%(int)pow(p, i)==0) ++cnt;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}
