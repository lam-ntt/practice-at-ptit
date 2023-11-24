#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int mark[256]={0};
		int mx=-1;
		for(int i=0; i<s.size(); i++){
			mark[s[i]]++;
			mx=max(mx, mark[s[i]]);
		}
		
		int limit;
		if(s.size()%2==0) limit=s.size()/2;
		else limit=s.size()/2+1;
		if(mx<=limit) cout << "1\n";
		else cout << "-1\n";
	}
	return 0;
}
