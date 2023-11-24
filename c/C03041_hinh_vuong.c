#include<stdio.h>
#include<math.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int x1, y1, x2, y2; scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		if(x2-x1==y2-y1) printf("YES\n");
		else printf("NO\n");	
	}
	return 0;
}
