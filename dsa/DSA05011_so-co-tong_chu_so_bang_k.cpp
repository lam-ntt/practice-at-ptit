#include<bits/stdc++.h>
#define ll long long
#define mod (ll)(1e9+7)
using namespace std;

int main(){
	ll dp[105][905]={0};
	for(int i=0; i<=900; i++){
		if(i<=9) dp[1][i]=1;
		else dp[1][i]=0;
	}
	for(int i=2; i<=100; i++){
		dp[i][0]=0; dp[i][1]=1;
		for(int j=2; j<=9*i; j++){
			for(int k=min(9, j-1); k>=0; k--){
				if(j>k){
					dp[i][j]+=dp[i-1][j-k];
					dp[i][j]%=mod;
				}
			}
		}
	}
	
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		if(k>9*n) cout << "0\n";
		else cout << dp[n][k] << "\n";
	}
	return 0;
}
