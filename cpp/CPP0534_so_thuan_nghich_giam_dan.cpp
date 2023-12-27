#include<bits/stdc++.h>
using namespace std;

int check(string s){
	if(s.size()==1){
		return 0;
	}

	string t=s;
	reverse(s.begin(), s.end());
	if(t==s){
		return 1;
	}
	return 0;
}

int cmp(pair<string, int> a, pair<string, int> b){
	if(a.first.size()!=b.first.size()){
		return a.first.size()>b.first.size();
	}else{
		return a.first>b.first;
	}
}

int main(){
	string s;
	map<string, int> mp;
	while(cin >> s){
		if(check(s)){
			++mp[s];
		}
	}
	
	vector<pair<string, int>> v;
	for(auto it: mp){
		v.push_back(it);
	}
	
	sort(v.begin(), v.end(), cmp);
	
	for(auto it: v){
		cout << it.first << " " << it.second << "\n";
	}
	return 0;
}
