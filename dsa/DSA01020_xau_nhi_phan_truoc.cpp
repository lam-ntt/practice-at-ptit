#include<bits/stdc++.h>
using namespace std;

int n; string s;

void gen(){
	int i=s.size()-1;
	while(i>=0&&s[i]=='0'){
		s[i]='1';
		--i;
	}
	if(i!=-1) s[i]='0';
	cout << s << "\n";
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> s;
		gen();
	}
	return 0;
}
