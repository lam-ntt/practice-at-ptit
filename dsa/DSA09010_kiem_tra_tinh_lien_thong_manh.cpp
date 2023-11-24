#include<bits/stdc++.h>
using namespace std;

int tmp, mark[1005];
list<int> lst[1005];

void init(){
	tmp=0;
	for(int i=1; i<=1000; i++){
		mark[i]=0;
	}
}

void dfs(int u){
	mark[u]=1;
	++tmp;
	for(auto v: lst[u]){
		if(mark[v]==0) dfs(v);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, e; cin >> n >> e;
		for(int i=1; i<=n; i++) lst[i].clear();
		int a, b;
		for(int i=1; i<=e; i++){
			cin >> a >> b;
			lst[a].push_back(b);
		}
		
		int ok=1;
		for(int i=1; i<=n; i++){
			init();
			dfs(i);
			if(tmp<n){
				ok=0; break;
			}
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
