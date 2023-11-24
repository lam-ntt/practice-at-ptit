#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		ll dp[n+2][m+2];
		for(int i=0; i<=n+1; i++){
			for(int j=0; j<=m+1; j++){
				dp[i][j]=0;
			}
		}
		dp[n+1][m]=1;
		for(int i=n; i>=0; i--){
			for(int j=m; j>=0; j--){
				dp[i][j]=dp[i+1][j]+dp[i][j+1];
			}
		}
		cout << dp[0][0] << "\n";
	}
	return 0;
}
