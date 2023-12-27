#include<bits/stdc++.h>
using namespace std;

int check(string s, int n){
	if(s.size()<26){
		return 0;
	}
	
	set<char> st;
	for(int i=0; i<s.size(); i++){
		if(s[i]>='a'&&s[i]<='z'){
			st.insert(s[i]);
		}
	}
	
	if(26-st.size()<=n){
		return 1;
	}
	return 0;
}

int main(){
	int test; cin >> test;
	while(test--){
		cin.ignore();
		string s; getline(cin, s);
		int n; cin >> n;
		cout << check(s, n) << "\n";
	}
	return 0;
}
