#include<bits/stdc++.h>
using namespace std;

int cmp(pair<int, int> a, pair<int, int> b){
	return a.second<b.second;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a, b;
		vector<pair<int, int>> v;
		for(int i=0; i<n; i++){
			cin >> a >> b;
			v.push_back({a, b});
		}
		sort(v.begin(), v.end(), cmp);
		
		int cnt=1, cur=v[0].second;
		for(int i=1; i<n; i++){
			if(v[i].first>=cur){
				cnt++;
				cur=v[i].second;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}
