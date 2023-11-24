#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int k, string s){
	if(k>=s.size()){
		cout << "0\n";
		return;
	}
	
	int mark[256]={0};
	for(int i=0; i<s.size(); i++){
		mark[s[i]]++;
	}
	priority_queue<int> pq;
	for(int i=0; i<256; i++){
		if(mark[i]!=0) pq.push(mark[i]);
	}
	
	while(k--){
		int tmp=pq.top(); pq.pop();
		if(--tmp!=0) pq.push(tmp);
	}
	
	ll sum=0;
	while(pq.size()>0){
		sum+=pow(pq.top(), 2);
		pq.pop();
	}
	cout << sum << "\n";
}

int main(){
	int t; cin >> t;
	while(t--){
		int k; cin >> k;
		string s; cin >> s;
		solve(k, s);
	}
	return 0;
}
