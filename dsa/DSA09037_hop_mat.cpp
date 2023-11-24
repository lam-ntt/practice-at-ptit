#include<bits/stdc++.h>
using namespace std;

int k, n, m, u, v, cnt=0, psb[1005]={0}, mark[1005];
set<int> pos;
vector<int> adj[1005];

void reset(){
	for(int i=1; i<=n; i++) mark[i]=0;
}

void check(){
	for(int i=1; i<=n; i++){
		if(psb[i]==0&&mark[i]==0) psb[i]=1;
	}
}

void dfs(int i){
	mark[i]=1;
	for(auto j: adj[i]) if(mark[j]==0) dfs(j);
}

int main(){
	cin >> k >> n >> m;
	int tmp;
	for(int i=1; i<=k; i++){
		cin >> tmp;
		pos.insert(tmp);
	}
	for(int i=1; i<=m; i++){
		cin >> u >> v;
		adj[u].push_back(v);
	}
	
	for(auto it: pos){
		reset();
		dfs(it);
		check();
	}
	for(int i=1; i<=n; i++) if(!psb[i]) ++cnt;
	cout << cnt;
	return 0;
}
