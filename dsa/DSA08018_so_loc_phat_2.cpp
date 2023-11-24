#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<string> v;
		queue<string> q;
		q.push("6");
		q.push("8");
		
		while(q.front().size()<=n){
			v.push_back(q.front());
			q.push(q.front()+"6");
			q.push(q.front()+"8");
			q.pop();
		}
		
		cout << v.size() << "\n";
		for(auto it: v) cout << it << " ";
		cout << "\n";
	}
	return 0;
}
