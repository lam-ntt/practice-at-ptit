#include<stdio.h>
#include<math.h>

int check(int n){
	int a[10], i=0, sum=0;
	while(n>0){
		if((n%10)==4) return 0;
		a[i++]=n%10;
		sum+=a[i-1];
		n/=10;
	}
	if(sum%10!=0) return 0;
	for(int j=0; j<=i/2; j++){
		if(a[j]!=a[i-1-j]) return 0;
	}
	return 1;
}

int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d", &n);
		int a=(int)pow(10, n-1);
		int b=(int)pow(10, n);
		for(int i=a; i<b; i++){
			if(check(i)) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
