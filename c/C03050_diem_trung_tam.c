#include<stdio.h>

int main(){
	int n, a, b; scanf("%d %d %d", &n, &a, &b);
	int e, f, cnt_a=1, cnt_b=1;
	for(int i=0; i<n-1; i++){
		scanf("%d %d", &e, &f);
		if(e==a||f==a) ++cnt_a;
		else if(e==b||f==b) ++cnt_b;
	}
	if(cnt_a==n||cnt_b==n) printf("Yes\n");
	else printf("No\n");
	return 0;
}
