#include<stdio.h>
#include<math.h>

int check(int n){
	int a[5], i=0;
	while(n>0){
		if(n%10==9) return 0;
		a[i++]=n%10;
		n/=10;
	}
	
	for(int j=0; j<=i/2; j++){
		if(a[j]!=a[i-1-j]) return 0;
	}
	return 1;
}

int main(){
	int n; scanf("%d", &n);
	int cnt=0;
	for(int i=2; i<n; i++){
		if(check(i)){
			printf("%d ", i);
			++cnt;
		}
	}
	printf("\n%d", cnt);
	return 0;
}
