#include<bits/stdc++.h>
using namespace std;

int check(string s){
	map<char, int> mp;
	for(int i=0; i<s.size(); i++){
		++mp[s[i]];
	}
	
	int sum=0;
	for(auto it: mp){
		sum+=it.second*(it.second+1)/2;
	}
	return sum;
}

int main(){
	int test; cin >> test;
	cin.ignore();
	while(test--){
		string s; getline(cin, s);
		cout << check(s) << "\n";
	}
	return 0;
}
