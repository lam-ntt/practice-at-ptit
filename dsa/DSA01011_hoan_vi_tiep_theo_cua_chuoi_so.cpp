#include<bits/stdc++.h>
using namespace std;

int n; string s;

void solve(){
	int i=s.size()-2;
	while(i>=0&&s[i]>=s[i+1]){
		--i;
	}
	if(i==-1){
		cout << "BIGGEST\n";
	}else{
		int pos=s.size()-1;
		// s[pos]!=s[i] => "<="
		while(s[pos]<=s[i]){
			--pos;
		}
		swap(s[i], s[pos]);
		sort(s.begin()+i+1, s.end());
		cout << s << "\n";
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> s;
		cout << n << " ";
		solve();
	}
}
