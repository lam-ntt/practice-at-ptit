#include<bits/stdc++.h>
using namespace std;

int n, fi, a[105][105], mark[105]={0};
vector<pair<int, int>> res;

void bfs(int u){
	queue<int> q;
	q.push(u); mark[u]=1;
	while(!q.empty()){
		u=q.front(); q.pop();
		for(int v=1; v<=n; v++){
			if(mark[v]==0&&a[u][v]){
				res.push_back({u, v});
				q.push(v); mark[v]=1;
			}
		}
	}
}

int main(){
	cin >> n >> fi;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) cin >> a[i][j];
	}
	
	bfs(fi);
	for(auto it: res) cout << "(" << it.first << ", " << it.second << ") ";
	return 0;
}
