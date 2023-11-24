#include<bits/stdc++.h>
using namespace std;

int n, tmp, a[105][105], mark[105]={0};

void init(){
	tmp=0;
	for(int i=1; i<=n; i++) mark[i]=0;
}

void dfs(int u){
	mark[u]=1; ++tmp;
	for(int v=1; v<=n; v++){
		if(mark[v]==0&&a[u][v]) dfs(v);
	}
}

int main(){
	cin >> n; 
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) cin >> a[i][j];
	}
	
	int ok=1;
	//check strongly connected graph
	for(int i=1; i<=n; i++){
		init();
		dfs(i); 
		if(tmp<n){
			cout << "No";
			ok=0; break;
		}
	}
	if(ok) cout << "Yes";
	return 0;
}
