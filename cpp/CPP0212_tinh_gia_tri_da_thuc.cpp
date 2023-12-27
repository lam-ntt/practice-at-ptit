#include<bits/stdc++.h>
using namespace std;

long long int chiaDu(int b, int n, int x){
	if(b==0){
		return 1;
	}
	long long int temp= chiaDu(floor(b/2), n, x);
	if(b%2==0){
		return (temp*temp)%n;
	}else{
		return ((temp*temp)%n)*x%n;
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		int n, x; cin >> n >> x;
		int a[2005]; long long int sum=0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			sum+=a[i]*chiaDu(n-1-i, 1e9+7, x);
			sum%=(long long int)(1e9+7);
		}
		
		cout << sum << "\n";
	}
	return 0;
}
