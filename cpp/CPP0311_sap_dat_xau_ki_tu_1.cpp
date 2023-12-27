#include<bits/stdc++.h>
using namespace std;

int cmp(pair<char, int> a, pair<char, int> b){
	return a.second<b.second;
}

int check(string s){
	map<char, int> mp;
	for(int i=0; i<s.size(); i++){
		++mp[s[i]];
	}
	
	int max=0;
	for(auto it: mp){
		if(max<it.second){
			max=it.second;
		}
	}
	
	if(s.size()%2==0){
		if(max<=s.size()/2){
			return 1;
		}
		return 0;
	}else{
		if(max<=(s.size()+1)/2){
			return 1;
		}
		return 0;
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		string s; cin >> s;
		cout << check(s) << "\n";
	}
	return 0;
}
