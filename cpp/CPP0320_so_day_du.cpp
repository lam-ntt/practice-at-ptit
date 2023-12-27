#include<bits/stdc++.h>
using namespace std;

void check(string s){
	if(s[0]=='0'){
		cout << "INVALID\n";
		return ;
	}
	for(auto i: s){
		if(i<'0'||i>'9'){
			cout << "INVALID\n";
			return ;
		}
	}
	
	set<char> st;
	for(auto i: s){
		st.insert(i);
	}
	if(st.size()==10){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		string s; cin >> s;
		check(s);
	}
	return 0;
}
