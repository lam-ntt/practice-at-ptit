#include<bits/stdc++.h>
using namespace std;

void solve(string s){
	long long sum=0;
	for(int i=0; i<s.size(); i++){
		if(s[i]>='0'&&s[i]<='9'){
			while(s[i]>='0'&&s[i]<='9'){
				sum+=s[i]-'0';
				s.erase(i, 1);
			}
			--i;
		}
	}
	
	sort(s.begin(), s.end());
	cout << s << sum << "\n";
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		solve(s);
	}
	return 0;
}
