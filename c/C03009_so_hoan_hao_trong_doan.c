#include<stdio.h>
#include<math.h>

int check(int n){
	int m=n-1;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) m-=i+n/i;
	}
	int i=sqrt(n);
	if(i*i==n) m+=i;
	
	if(m==0) return 1;
	return 0;
}

int main(){
	int a, b, tmp; scanf("%d %d",  &a, &b);
	if(a>b){
		tmp=a; a=b; b=tmp;
	}
	for(int i=a; i<=b; i++){
		if(check(i)) printf("%d ", i);
	}
	return 0;
}
