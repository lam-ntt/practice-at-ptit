#include<bits/stdc++.h>
using namespace std;

long long solve(string s, int n){
	long long cnt=0, tmp;
	for(int i=0; i<s.size(); i++){
		tmp=0;
		for(int j=i; j<s.size(); j++){
			tmp=tmp*10+s[j]-'0';
			tmp%=n;
			if(tmp==0) ++cnt;
		}
	}
	return cnt;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		cout << solve(s, 8)-solve(s, 24) << "\n";
	}
	return 0;
}
