#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int k; cin >> k;
		string s; cin >> s;
		
		map<int, int> mp;
		for(int i=0; i<s.size(); i++) mp[s[i]]++;
		priority_queue<int> pq;
		for(auto it: mp) pq.push(it.second);
		
		while(!(k==0||pq.empty())){
			int tmp=pq.top()-1;		
			if(tmp!=0) pq.push(tmp);
			pq.pop();
			--k;
		}
		
		ll sum=0;
		while(!pq.empty()){
			sum+=pow(pq.top(), 2);
			pq.pop();
		}
		cout << sum << "\n";
	}
	return 0;
}
