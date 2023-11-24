#include<bits/stdc++.h>
#define ll long long
using namespace std;

void del(string &s){
	for(int i=0; i<s.size(); i++){
		if(s[i]<'0'||s[i]>'9') s[i]=' ';
	}
}

bool cmp(pair<ll, ll> a, pair<ll, ll> b){
	return a.first>b.first;
}

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s1, s2; 
		getline(cin, s1); del(s1); 
		getline(cin, s2); del(s2);
		
		ll a, b;
		map<ll, ll> mp;
		stringstream ss(s1);
		stringstream se(s2);
		while(ss>>a&&ss>>b) mp[b]+=a;
		while(se>>a&&se>>b) mp[b]+=a;
		
		vector<pair<ll, ll>> res;
		for(auto it: mp) res.push_back(it);
		sort(res.begin(), res.end(), cmp);
		
		for(int i=0; i<res.size()-1; i++){
			cout << res[i].second << "*x^" << res[i].first << " + ";
		}
		cout << res[res.size()-1].second << "*x^" << res[res.size()-1].first << "\n";		
	}
	return 0;
}
