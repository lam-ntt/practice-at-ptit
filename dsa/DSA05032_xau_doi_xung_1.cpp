#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n=s.size();
		int dp[n][n];
		for(int i=0; i<n; i++){
			dp[i][i]=0;
			if(i<n-1){
				if(s[i]==s[i+1]) dp[i][i+1]=0;
				else dp[i][i+1]=1;
			}
		}
		
		for(int i=n-3; i>=0; i--){
			for(int j=i+2; j<n; j++){
				if(s[i]==s[j]) dp[i][j]=dp[i+1][j-1];
				else dp[i][j]=1+min(dp[i+1][j], dp[i][j-1]);
			}
		}
		cout << dp[0][n-1] << "\n";
	}
	return 0;
}
