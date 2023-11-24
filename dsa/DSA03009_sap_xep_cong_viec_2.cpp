#include<bits/stdc++.h>
using namespace std;

int cmp(pair<int, int> a, pair<int, int> b){
	return a.second>b.second;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int tmp, a, b;
		vector<pair<int, int>> v;
		for(int i=0; i<n; i++){
			cin >> tmp >> a >> b;
			v.push_back({a, b});
		}
		sort(v.begin(), v.end(), cmp);
		
		int cnt=0, profit=0, mark[1005]={0};
		for(int i=0; i<n; i++){
			int j=v[i].first;
			while(mark[j]!=0) --j;
			if(j>=1){
				mark[j]=1;
				++cnt;
				profit+=v[i].second;
			}
		}
		cout << cnt << " " << profit << "\n";
	}
	return 0;
}
