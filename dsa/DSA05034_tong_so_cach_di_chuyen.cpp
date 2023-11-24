#include<bits/stdc++.h>
#define ll long long
#define mod (ll)(1e9+7)
using namespace std;

ll n, k, dp[100005]={0}, pre[100005]={0};

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1; i<=k; i++){
			dp[i]=1;
			for(int j=1; j<i; j++){
				dp[i]+=dp[j];
				dp[i]%=mod;
			}
			pre[i]=pre[i-1]+dp[i];
			pre[i]%=mod;
		}
		for(int i=k+1; i<=n; i++){
			dp[i]=mod+pre[i-1]-pre[i-1-k];
			dp[i]%=mod;
			pre[i]=pre[i-1]+dp[i];
			pre[i]%=mod;
		}
		cout << dp[n] << "\n";
	}
	return 0;
}
