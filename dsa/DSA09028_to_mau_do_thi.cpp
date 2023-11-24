#include<bits/stdc++.h>
using namespace std;

int n, e, limit, a[15][15], mark[15], deg[15];
vector<int> node;

void init(){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) a[i][j]=0;
	}
	for(int i=1; i<=n; i++){
		mark[i]=0;
		deg[i]=0;
	}
	node.clear();
}

int cmp(int u, int v){
	return deg[u]>deg[v];
}

void reset(){
	for(int i=1; i<=n; i++) deg[i]=0;
	for(int i=1; i<=n; i++){
		if(mark[i]) continue;
		for(int j=1; j<=n; j++){
			if(mark[j]) continue;
			deg[i]+=a[i][j];
			deg[j]+=a[i][j];
		}
	}
	sort(node.begin(), node.end(), cmp);
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> e >> limit;
		init();
		int u, v;
		for(int i=1; i<=e; i++){
			cin >> u >> v;
			a[u][v]=1; a[v][u]=1;	
		}
		for(int i=1; i<=n; i++) node.push_back(i);
		
		int cnt=0, num=0;
		while(cnt!=n){
			reset();
			set<int> colored_node;
			for(int i=0; i<n; i++){
				if(mark[node[i]]) continue;
				int ok=1;
				for(auto it: colored_node){
					if(a[node[i]][it]){
						ok=0;
						break;
					}
				}
				if(ok){
					mark[node[i]]=1;
					colored_node.insert(node[i]);
				}
			}
			cnt+=colored_node.size();
			++num;	
		}
		
		if(num<=limit) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
