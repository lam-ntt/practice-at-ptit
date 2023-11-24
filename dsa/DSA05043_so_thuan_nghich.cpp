#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n=s.size();
		for(int i=0; i<n; i++){
			dp[i][i]=1;
			if(i<n-1){
				if(s[i]==s[i+1]) dp[i][i+1]=1;
				else dp[i][i+1]=0;
			} 
		}
		for(int i=n-3; i>=0; i--){
			for(int j=i+2; j<n; j++){
				if(s[i]==s[j]) dp[i][j]=dp[i+1][j-1];
				else dp[i][j]=0;
			}
		}
		
		int mx=-1;
		for(int i=0; i<n; i++){
			for(int j=i; j<n; j++){
				if(dp[i][j]) mx=max(mx, j-i+1);
			}
		}
		cout << mx << "\n";		
	}
	return 0;
}
