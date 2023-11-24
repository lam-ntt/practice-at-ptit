#include<bits/stdc++.h>
using namespace std;

list<int> lst[1005];

int main(){
	int t; cin >> t;
	while(t--){
		int n, e; cin >> n >> e;
		for(int i=1; i<=n; i++) lst[i].clear();
		int a, b;
		for(int i=0; i<e; i++){
			cin >> a >> b;
			lst[a].push_back(b);
			lst[b].push_back(a);
		}
		
		for(int i=1; i<=n; i++){
			lst[i].sort();
			cout << i << ": ";
			for(auto it: lst[i]) cout << it << " ";
			cout << "\n";
		}
	}
	return 0;
}
