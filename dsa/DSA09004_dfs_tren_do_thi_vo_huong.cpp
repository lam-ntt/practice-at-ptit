#include<bits/stdc++.h>
using namespace std;

int mark[1005];
list<int> lst[1005];

void dfs(int u){
	cout << u << " ";
	mark[u]=1;
	for(auto v: lst[u]){
		if(mark[v]==0) dfs(v);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, e, u; cin >> n >> e >> u;
		for(int i=1; i<=n; i++) lst[i].clear();
		int a, b;
		for(int i=1; i<=e; i++){
			cin >> a >> b;
			lst[a].push_back(b);
			lst[b].push_back(a);
		}
		
		for(int i=1; i<=n; i++) mark[i]=0;
		dfs(u);
		cout << "\n";
	}
	return 0;
}
