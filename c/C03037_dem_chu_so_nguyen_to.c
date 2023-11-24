#include<stdio.h>
#include<math.h>

int prime(int n){
	if(n==0||n==1){
		return 0;
	}
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int check(int arr[], int local, int n){
	for(int i=local+1; i<n; i++){
		if(arr[i]==arr[local]){
			return 1;
		}
	}
	return 0;
}

int repeat(int value, long long n){
	int cnt=0;
	while(n>0){
		if(value==n%10){
			++cnt;
		}
		n/=10;
	}
	return cnt;
}

int main(){
	long long n; scanf("%lld", &n);
	long m=n;
	
	int arr[18], i=0;
	while(n>0){
		arr[i++]=n%10;
		n/=10;
	}
	
	for(int j=0; j<i; j++){
		if(prime(arr[j])==0){
			arr[j]=0;
		}
	}
	
	for(int j=0; j<i; j++){
		if(check(arr, j, i)==1){
			arr[j]=0;
		}
	}
	
	for(int j=i-1; j>=0; j--){
		if(arr[j]!=0){
			printf("%d %d\n", arr[j], repeat(arr[j], m));
		}
	}
	
	return 0;
}
