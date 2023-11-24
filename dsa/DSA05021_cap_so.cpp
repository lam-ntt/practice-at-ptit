#include<bits/stdc++.h>
#define fi first
#define se second
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.se<b.se;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a, b; vector<pair<int, int>> v;
		for(int i=0; i<n; i++){
			cin >> a >> b;
			v.push_back({a, b});
		}
		sort(v.begin(), v.end(), cmp);
		
		int dp[n];
		for(int i=0; i<n; i++) dp[i]=1;
		for(int i=1; i<n; i++){
			for(int j=0; j<i; j++){
				if(v[i].fi>v[j].se) dp[i]=max(dp[i], dp[j]+1);
			}
		}
		
		int mx=-1;
		for(int i=0; i<n; i++) mx=max(mx, dp[i]);
		cout << mx << "\n";
	}
	return 0;
}
