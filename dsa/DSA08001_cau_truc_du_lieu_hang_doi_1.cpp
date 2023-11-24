#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int op; queue<int> q;
		int n; cin >> n;	
		while(n--){
			cin >> op;
			if(op==1) cout << q.size() << "\n";
			else if(op==2){
				if(q.empty()) cout << "YES\n";
				else cout << "NO\n";
			}
			else if(op==3){
				int tmp; cin >> tmp;
				q.push(tmp);
			}
			else if(op==4){
				if(!q.empty()) q.pop();
			}
			else if(op==5){
				if(!q.empty()) cout << q.front() << "\n";
				else cout << "-1\n";
			}
			else if(op==6){
				if(!q.empty()) cout << q.back() << "\n";
				else cout << "-1\n";
			}
		}
	}
	return 0;
}
