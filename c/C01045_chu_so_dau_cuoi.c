#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[9]; int i=0;
	while(n>0){
		a[i++]=n%10;
		n/=10;
	}
	printf("%d %d", a[i-1], a[0]);
	return 0;
}
