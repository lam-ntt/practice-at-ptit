#include<bits/stdc++.h>
using namespace std;

int n, e, mark[1005], before[1005];
vector<int> adj[1005], tmp, res;

void init(){
	for(int i=1; i<=n; i++){
		adj[i].clear();
		mark[i]=0;
		before[i]=0;
	}
	tmp.clear();
	res.clear()
}

void dfs(int u){
	mark[u]=1;
	for(auto v: adj[u]){
		if(mark[v]==0){
			before[v]=u; 
			tmp.push_back(v); 
			dfs(v);
			tmp.pop_back();
		}else{
			if(v==1&&v!=before[u]&&res.size()==0){
				tmp.push_back(1);
				res=tmp;
				return;
			}
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> e;
		init();
		int u, v;
		for(int i=1; i<=e; i++){
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		for(int i=1; i<=n; i++) sort(adj[i].begin(), adj[i].end());
		
		tmp.push_back(1); dfs(1);
		if(res.size()!=0){
			for(auto it: res) cout << it << " ";
			cout << "\n";
		}else cout << "NO\n";
	}
	return 0;
}
