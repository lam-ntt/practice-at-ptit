#include<bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	int dp[s.size()], dpx[s.size()];
	if(s[0]=='A') dp[0]=0;
	else dp[0]=1;
	if(s[0]=='A') dpx[0]=1;
	else dpx[0]=0;
	
	int i=1;
	while(i<s.size()){
		if(s[i]=='A') dp[i]=dp[i-1];
		else dp[i]=min(dp[i-1]+1, dpx[i-1]+1);
		if(s[i]=='B') dpx[i]=dpx[i-1];
		else dpx[i]=min(dpx[i-1]+1, dp[i-1]+1);
		++i;
	}
	cout << dp[s.size()-1] << "\n";
	
	return 0;
}
