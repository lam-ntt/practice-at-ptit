#include<bits/stdc++.h>
using namespace std;

void solve(int n){
	string s="";
	while(n>=7){
		s+="7";
		n-=7;
	}
	while(n%4!=0&&s.size()!=0){
		n+=7;
		s.erase(0, 1);
	}
	if(n%4==0){
		while(n>0){
			s="4"+s;
			n-=4;
		}
	}
	
	if(s.size()==0) cout << "-1\n";
	else cout << s << "\n";
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		solve(n);
	}
	return 0;
}
