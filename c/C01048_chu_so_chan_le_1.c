#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int i=0, a[9];
	while(n>0){
		a[i++]=n%10;
		n/=10;
	}
	
	int odd=0, even=0;
	for(int j=0; j<i; j++){
		if(a[j]%2==0) ++even;
		else ++odd;
	}
	printf("%d %d", odd, even);
	return 0;
}
