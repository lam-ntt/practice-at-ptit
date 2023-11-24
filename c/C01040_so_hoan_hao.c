#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int m=n;
	for(int i=1; i<n; i++){
		if(n%i==0) m-=i;
	}
	if(m==0) printf("1");
	else printf("0");
	return 0;
}
