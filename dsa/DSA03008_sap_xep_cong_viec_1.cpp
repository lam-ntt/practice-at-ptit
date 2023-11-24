#include<bits/stdc++.h>
using namespace std;

int n, s[1005], f[1005];

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second<b.second;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++) cin >> s[i];
		for(int i=0; i<n; i++) cin >> f[i];
		
		vector<pair<int, int>> v;
		for(int i=0; i<n; i++){
			v.push_back({s[i], f[i]});
		}
		sort(v.begin(), v.end(), cmp);
		
		int cnt=1, cur=v[0].second;
		for(int i=1; i<n; i++){
			if(v[i].first>=cur){
				++cnt;
				cur=v[i].second;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}
