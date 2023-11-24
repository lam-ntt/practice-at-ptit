#include<bits/stdc++.h>
using namespace std;

int n; string s;

void solve(){
	queue<string> q;
	q.push("9");
	
	while(1){
		s=q.front();
		if(stoll(s)%n==0){
			cout << s << "\n";
			return;
		}
		q.pop();
		q.push(s+"0");
		q.push(s+"9");
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		solve();
	}
}