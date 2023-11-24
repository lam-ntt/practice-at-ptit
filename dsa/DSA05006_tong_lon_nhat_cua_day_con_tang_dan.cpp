#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		int dp[n], mx=-1;
		for(int i=0; i<n; i++){
			dp[i]=a[i];
			for(int j=0; j<i; j++){
				if(a[j]<a[i]) dp[i]=max(dp[i], dp[j]+a[i]);
			}
			mx=max(mx, dp[i]);
		}
		cout << mx << "\n";
	}
	return 0;
}
