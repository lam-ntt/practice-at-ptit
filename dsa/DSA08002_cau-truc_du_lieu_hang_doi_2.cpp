#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	queue<int> q;
	int n; cin >> n;
	while(n--){
		cin >> s;
		if(s=="PUSH"){
			int tmp; cin >> tmp;
			q.push(tmp);
		}
		else if(s=="PRINTFRONT"){
			if(!q.empty()) cout << q.front() << "\n";
			else cout << "NONE\n";
		}
		else if(s=="POP"){
			if(!q.empty()) q.pop();
		}
	}
	return 0;
}
