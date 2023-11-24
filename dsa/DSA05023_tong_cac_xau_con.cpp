#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		string tmp="";
		while(tmp.size()<s.size()) tmp+="1";
		ll sum=0;
		for(int i=0; i<s.size(); i++){
			sum+=(i+1)*(s[i]-'0')*stoll(tmp);
			tmp.erase(0, 1);
		}
		cout << sum << "\n";	
	}
	return 0;
}
