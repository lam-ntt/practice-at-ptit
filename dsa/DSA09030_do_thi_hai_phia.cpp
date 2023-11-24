#include<bits/stdc++.h>
using namespace std;

int n, e, ok, level[1005];
vector<int> lst[1005];

void init(){
	for(int i=1; i<=n; i++){
		level[i]=-1;
		lst[i].clear();
	}
	ok=1;
}

bool bfs(int u){
	queue<int> q;
	q.push(u);
	level[u]=0;
	while(!q.empty()){
		u=q.front(); q.pop();
		for(auto v: lst[u]){
			if(level[v]==-1){
				level[v]=1-level[u];
				q.push(v);
			}else if(level[v]==level[u]) return 0;
		}
	}
	return 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> e;
		init();
		int u, v;
		for(int i=1; i<=e; i++){
			cin >> u >> v;
			lst[u].push_back(v);
			lst[v].push_back(u);
		}
		
		for(int i=1; i<=n; i++){
			if(level[i]==-1){
				ok=bfs(i);
				if(!ok) break;
			}
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";	
	}
	return 0;
}
