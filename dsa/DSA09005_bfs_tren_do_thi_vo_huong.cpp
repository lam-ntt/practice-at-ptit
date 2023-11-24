#include<bits/stdc++.h>
using namespace std;

int mark[1005];
list<int> lst[1005];

void bfs(int u){
	queue<int> q;
	q.push(u); mark[u]=1;
	while(!q.empty()){
		u=q.front(); q.pop();
		cout << u << " ";
		for(auto v: lst[u]){
			if(mark[v]==0){
				q.push(v); mark[v]=1;
			}
		}
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
		bfs(u);
		cout << "\n";
	}
	return 0;
}
