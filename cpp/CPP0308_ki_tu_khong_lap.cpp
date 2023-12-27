#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin >> test;
	cin.ignore();
	while(test--){
		string s; cin >> s;
		map<char, int> mp;
		for(int i=0; i<s.size(); i++){
			++mp[s[i]];
		}
		
		for(auto i: s){
			if(mp[i]==1){
				cout << i;
			}
		}
		cout << "\n";
	}
	return 0;
}
