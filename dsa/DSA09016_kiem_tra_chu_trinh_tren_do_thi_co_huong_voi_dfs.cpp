#include<bits/stdc++.h>
using namespace std;

int mark[1005], before[1005];
list<int> lst[1005];

void init(){
	for(int i=1; i<=1000; i++){
		mark[i]=0;
		before[i]=0;
	}
}

void dfs(int u){
	mark[u]=1;
	for(auto v: lst[u]){
		if(mark[v]==0){
			before[v]=u;
			dfs(v);
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, e; cin >> n >> e;
		for(int i=1; i<=n; i++) lst[i].clear();
		int a, b; vector<pair<int, int>> edge;
		for(int i=1; i<=e; i++){
			cin >> a >> b;
			lst[a].push_back(b);
			edge.push_back({a, b});
		}
		
		int ok=0;
		for(auto it: edge){
			init();
			dfs(it.second);
			if(before[it.first]!=0){
				ok=1;
				break;
			}
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
