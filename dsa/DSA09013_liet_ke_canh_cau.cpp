#include<bits/stdc++.h>
using namespace std;

int mark[1005], fi, se;
list<int> lst[1005];
set<pair<int, int>> s;

void init(int n){
	for(int i=1; i<=n; i++) mark[i]=0;
}

bool check(int u, int v){
	return !((u==fi&&v==se)||(u==se&&v==fi));
}

void dfs(int u){
	mark[u]=1;
	for(auto v: lst[u]){
		if(mark[v]==0&&check(u, v)) dfs(v);
	}	
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, e; cin >> n >> e;
		for(int i=1; i<=n; i++) lst[i].clear();
		s.clear();
		int a, b;
		for(int i=1; i<=e; i++){
			cin >> a >> b;
			lst[a].push_back(b);
			lst[b].push_back(a);
			s.insert({min(a, b), max(a, b)});
		}
		
		for(auto it: s){
			init(n);
			fi=it.first; 
			se=it.second;
			int tmp=0;
			for(int i=1; i<=n; i++){
				if(mark[i]==0){
					++tmp;
					dfs(i);
				}
			}
			if(tmp>1) cout << it.first << " " << it.second << " ";
		}
		cout << "\n";
	}
	return 0;
}
