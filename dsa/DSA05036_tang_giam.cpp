#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		float a[n], b[n];
		for(int i=0; i<n; i++) cin >> a[i] >> b[i];
		
		int dp[n],  mx=1;
		for(int i=0; i<n; i++) dp[i]=1;
		for(int i=1; i<n; i++){
			for(int j=0; j<i; j++){
				if(a[i]>a[j]&&b[i]<b[j]) dp[i]=max(dp[i], dp[j]+1);
			}
			mx=max(mx, dp[i]);
		}
		
		cout << mx << "\n";
	}
	return 0;
}
