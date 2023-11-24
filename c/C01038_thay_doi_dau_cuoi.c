#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[9]={0}, i=0;
	while(n>0){
		a[i++]=n%10;
		n/=10;
	}
	
	if(a[0]!=0) printf("%d", a[0]);
	for(int j=i-2; j>0; j--){
		printf("%d", a[j]);
	}
	printf("%d", a[i-1]);
	return 0;
}
