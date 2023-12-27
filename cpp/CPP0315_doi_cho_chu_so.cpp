#include<bits/stdc++.h>
using namespace std;

void solve(string s){
	int mark=s.size()-2;
	while(mark>=0&&s[mark]<=s[mark+1]){
		--mark;
	}
	if(mark==-1){
		cout << "-1\n";
		return;
	}
	
	int pos=mark+1;
	for(int j=pos+1; j<s.size(); j++){
		if(s[j]>s[pos]&&s[j]<s[mark]){
			pos=j;
		}
	}
	swap(s[mark], s[pos]);
	if(s[0]=='0'){
		cout << "-1\n";
		return;
	}else{
		cout << s << "\n";
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		solve(s);
	}
	return 0;
}
