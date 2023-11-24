#include<bits/stdc++.h>
#define ll long long
#define mod (ll)(1e9+7)
using namespace std;

int main(){
	ll dp[105][10]={0};
	for(int i=0; i<=9; i++){
		dp[1][i]=1;
	}
	for(int i=2; i<=100; i++){
		dp[i][0]=1;
		for(int j=1; j<=9; j++){
			dp[i][j]=dp[i][j-1]+dp[i-1][j];
			dp[i][j]%=mod;
		}
	}
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll sum=0;
		for(int i=0; i<=9; i++){
			sum+=dp[n][i];
			sum%=mod;
		}
		cout << sum << "\n";
	}
	return 0;
}
