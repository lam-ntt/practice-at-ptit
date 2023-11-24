#include<bits/stdc++.h>
using namespace std;

int n, fi, a[105][105], mark[105]={0};

void dfs(int u){
	cout << u << " ";
	mark[u]=1;
	for(int v=1; v<=n; v++){
		if(mark[v]==0&&a[u][v]) dfs(v);
	}
}

int main(){
	cin >> n >> fi;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) cin >> a[i][j];
	}
	dfs(fi);
	return 0;
}
