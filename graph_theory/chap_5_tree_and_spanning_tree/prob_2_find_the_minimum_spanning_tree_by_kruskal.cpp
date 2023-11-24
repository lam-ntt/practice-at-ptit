#include<bits/stdc++.h>
#define fi first
#define se second
using namespace std;

int n, w, a[105][105], path[105][105], mark[105], before[105];
vector<pair<int, int>> edge, res;

void init(){
	for(int i=1; i<=n; i++){
		mark[i]=0;
		before[i]=0;
	}
}

void dfs(int u){
	mark[u]=1;
	for(int v=1; v<=n; v++){
		if(mark[v]==0&&path[u][v]){
			before[v]=u;
			dfs(v);
		}
	}
}

int cmp(pair<int, int> v1, pair<int, int> v2){
	return a[v1.fi][v1.se]<a[v2.fi][v2.se];
}

int main(){
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> a[i][j]; path[i][j]=0;
			if(a[i][j]>0&&j>i) edge.push_back({i, j});
		}
	}
	sort(edge.begin(), edge.end(), cmp);
	
	w=0;
	for(auto it: edge){
		if(res.size()==n-1) break;
		init();
		dfs(it.fi);
		if(before[it.se]==0){
			w+=a[it.fi][it.se];
			path[it.fi][it.se]=1;
			path[it.se][it.fi]=1;
			res.push_back(it);
		}
	}
	
	if(res.size()<n-1) cout << "Not found !";
	else{
		cout << w << "\n";
		for(auto it: res) cout << "(" << it.fi << ", " << it.se << ") ";
	}
	return 0;
}
