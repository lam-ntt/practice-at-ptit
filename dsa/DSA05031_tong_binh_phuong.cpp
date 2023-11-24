#include<bits/stdc++.h>
using namespace std;

int main(){
	int dp[10005]={0};
	dp[1]=1;
	for(int i=2; i<=10000; i++){
		int tmp=sqrt(i);
		if(tmp*tmp>i) tmp--;
		dp[i]=1+dp[i-tmp*tmp];
		for(int j=1; j<tmp; j++){
			dp[i]=min(dp[i], 1+dp[i-j*j]);
		}
	}
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << dp[n] << "\n";
	}
	return 0;
}
