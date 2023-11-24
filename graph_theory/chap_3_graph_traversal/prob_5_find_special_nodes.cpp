#include<bits/stdc++.h>
using namespace std;

int n, cnt, tmp, a[105][105], mark[105]={0};

void init(){
	tmp=0;
	for(int i=1; i<=n; i++) mark[i]=0;
}

void dfs(int u){
	mark[u]=1;
	for(int v=1; v<=n; v++){
		if(mark[v]==0&&a[u][v]) dfs(v);
	}
}

int main(){
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) cin >> a[i][j];
	}
	
	cnt=0;
	// count connected components at first
	for(int i=1; i<=n; i++){
		if(mark[i]==0){
			dfs(i);
			++cnt;
		}
	}
	
	// check node
	for(int i=1; i<=n; i++){
		init();
		mark[i]=1;
		for(int j=1; j<=n; j++){
			if(mark[j]==0){
				++tmp;
				dfs(j);
			}
		}
		if(tmp>cnt) cout << i << " ";
	}
	return 0;
}
