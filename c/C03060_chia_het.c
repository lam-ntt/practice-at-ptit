#include<stdio.h>
#include<math.h>

int main(){
	int n, k; scanf("%d %d", &n, &k);
	int cnt=0;
	for(int i=1; i<=k; i++){
		for(int j=1; j<=n; j++){
			if(j%(int)pow(2, i)==0) ++cnt;
		}
	}
	
	if(cnt>=k) printf("Yes\n");
	else printf("No\n");
	return 0;
}
