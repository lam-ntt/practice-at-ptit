#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int i=n%10;
		while(n>10){
			n/=10;
		}
		if(i==n%10) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
