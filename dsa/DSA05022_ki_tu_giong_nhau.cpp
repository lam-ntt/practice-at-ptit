#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int x, y, z; cin >> x >> y >> z;
		
		int dp[n+1]={0};
		dp[0]=0; dp[1]=x;
		for(int i=2; i<=n; i++){
			if(i%2==0) dp[i]=min(dp[i-1]+x, dp[i/2]+z);
			else dp[i]=min(dp[i-1]+x, min(dp[i/2]+z+x, dp[i/2+1]+z+y));
		}
		cout << dp[n] << "\n";
	}
	return 0;
}
