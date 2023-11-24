#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s;
		while(n!=0){
			s+=to_string(n%2);
			n/=2;
		}
		reverse(s.begin(), s.end());
		
		queue<string> q;
		q.push("1");
		while(q.front()!=s){
			cout << q.front() << " ";
			q.push(q.front()+"0");
			q.push(q.front()+"1");
			q.pop();
		}
		cout << q.front() << "\n";	
	}
	return 0;
}
