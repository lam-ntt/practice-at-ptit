#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n=s.size(), dp[n][n];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				dp[i][j]=0;
			}
		}
		
		for(int i=n-2; i>=0; i--){
			for(int j=i+1; j<n; j++){
				if(s[i]==s[j]) dp[i][j]=dp[i+1][j-1];
				else dp[i][j]=1+min(dp[i+1][j], dp[i][j-1]);
			}
		}
		cout << dp[0][n-1] << "\n";
	}
	return 0;
}
