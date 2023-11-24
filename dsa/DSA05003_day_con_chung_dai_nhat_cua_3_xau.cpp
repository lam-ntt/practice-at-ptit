#include<bits/stdc++.h>
using namespace std;

int n, m, p, dp[105][105][105];
string s1, s2, s3;

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m >> p;
		cin >> s1 >> s2 >> s3;
		
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				for(int k=1; k<=p; k++){
					if(s1[i-1]==s2[j-1]&&s1[i-1]==s3[k-1]) dp[i][j][k]=dp[i-1][j-1][k-1]+1;
					else dp[i][j][k]=max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
				}
			}
		}
		cout << dp[n][m][p] << "\n";
	}
	return 0;
}
