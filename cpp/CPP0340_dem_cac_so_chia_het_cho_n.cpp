#include<bits/stdc++.h>
using namespace std;

int value(char k){
	return k-'0';
}

long long dp[105][105];
void solve(string s, int n){
	for(int i=0; i<s.size(); i++)
		for(int j=0; j<n; j++) dp[i][j]=0;
	
	dp[0][value(s[0])%n]=1;
	for(int i=1; i<s.size(); i++){
		dp[i][value(s[i])%n]=1;
		for(int j=0; j<n; j++){
			dp[i][j]+=dp[i-1][j];
			dp[i][(j*10+value(s[i]))%n]+=dp[i-1][j];
		}
	}
	cout << dp[s.size()-1][0] << "\n";
}

int main(){
	int t; cin >> t;
	while(t--){
		int m, n; cin >> m >> n;
		string s; cin >> s;
		solve(s, n);
	}
	return 0;
}
