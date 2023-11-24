#include<bits/stdc++.h>
#define ll long long
#define mod (ll)(1e9+7)
using namespace std;

ll dp[1000005];

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int i=0; i<n; i++) cin >> a[i];
		
		dp[0]=1;
		for(int i=1; i<=k; i++){
			dp[i]=0;
			for(int j=0; j<n; j++){
				if(i>=a[j]){
					dp[i]+=dp[i-a[j]];
					dp[i]%=mod;
				}
			}
		}
		cout << dp[k] << "\n";
	}
	return 0;
}
