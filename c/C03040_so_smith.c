#include<stdio.h>

int sum(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int check(int n){
	int sumf=sum(n);
	for(int i=2; i<=n; i++){
		while(n%i==0){
			sumf-=sum(i);
			n/=i;
		}
	}
	if(sumf==0) return 1;
	else return 0;
}

int main(){
	int n; scanf("%d", &n);
	if(check(n)) printf("YES\n");
	else printf("NO\n");
	return 0;
}
