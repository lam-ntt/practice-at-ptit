#include<stdio.h>
#include<math.h>

void check(long long n){
	int a[20], i=0, cnt=0;
	while(n>0){
		a[i++]=n%10;
		if(a[i-1]==8||a[i-1]==9) a[i-1]=0;
        if(a[i-1]!=0&&a[i-1]!=1){
            printf("INVALID\n");
			return;
        }
        if(a[i-1]==1) ++cnt;
		n/=10;
	}
	if(cnt==0){
		printf("INVALID\n");
		return;
	}
	
	int start;
	for(int j=i-1; j>=0; j--){
		if(a[j]==1){
            start=j; 
            break;
        }
	}
	for(int j=start; j>=0; j--) printf("%d", a[j]);
    printf("\n");
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		check(n);
	}
	return 0;
}
