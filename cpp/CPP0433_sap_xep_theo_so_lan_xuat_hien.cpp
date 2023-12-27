#include<bits/stdc++.h>
using namespace std;

int cmp(pair<int, int> a, pair<int, int> b){
	if(a.second!=b.second){
		return a.second>b.second;
	}else{
		return a<b;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		map<int, int> mp; int tmp;
		for(int i=0; i<n; i++){
			cin >> tmp;
			++mp[tmp];
		}
		
		vector<pair<int, int>> v;
		for(auto i: mp){
			v.push_back(i);
		}
		sort(v.begin(), v.end(), cmp);
		
		for(auto i: v){
			for(int j=0; j<i.second; j++){
				cout << i.first << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
