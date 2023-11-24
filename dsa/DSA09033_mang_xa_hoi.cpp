#include<bits/stdc++.h>
using namespace std;

int mark[100005];
list<int> lst[100005];
vector<int> node;

void init(){
	for(int i=1; i<=100000; i++){
		mark[i]=0;
		lst[i].clear();
	}
}

void dfs(int u){
	mark[u]=1;
	node.push_back(u);
	for(auto v: lst[u]){
		if(mark[v]==0) dfs(v);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		init();
		int n, e; cin >> n >> e;
		int a, b;
		for(int i=1; i<=e; i++){
			cin >> a >> b;
			lst[a].push_back(b);
			lst[b].push_back(a);
		}
		
		int ok=1;
		for(int i=1; i<=n; i++){
			if(mark[i]==0){
				node.clear(); dfs(i);
				if(node.size()<=2) continue;
				for(auto j: node){
					if(lst[j].size()!=node.size()-1){
						ok=0; break;
					}
				}
				if(!ok) break;	
			}
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
