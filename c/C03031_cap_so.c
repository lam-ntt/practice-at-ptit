#include<stdio.h>

int ucln(int a, int b){
	int tmp;
	if(a>b){
		tmp=a; a=b; b=tmp;
	}
	while(a!=0){
		tmp=a; a=b%a; b=tmp;
	}
	return b;
}

int main(){
	int t;  scanf("%d", &t);
	while(t--){
		int a, b, c, d; scanf("%d %d %d %d", &a, &b, &c, &d);
		if(ucln(a, b)==ucln(c, d)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
