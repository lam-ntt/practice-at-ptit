#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		stack<string> st;
		queue<string> q;
		q.push("6");
		q.push("8");
		
		while(q.front().size()<=n){
			st.push(q.front());
			q.push(q.front()+"6");
			q.push(q.front()+"8");
			q.pop();
		}
		
		while(!st.empty()){
			cout << st.top() << " ";
			st.pop();
		}
		cout << "\n";
	}
	return 0;
}
