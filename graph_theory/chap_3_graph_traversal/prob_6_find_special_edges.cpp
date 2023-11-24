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
			++cnt;
			dfs(i);
		}
	}
	
	// check special edge
	for(int i=1; i<=n; i++){
		for(int j=i+1; j<=n; j++){
			if(a[i][j]){
				init();
				a[i][j]=0;
				a[j][i]=0; // when the graph is undirected
				for(int k=1; k<=n; k++){
					if(mark[k]==0){
						++tmp;
						dfs(k);
					}
				}
				if(tmp>cnt) cout << "(" << i << ", " << j << ") ";
				a[i][j]=1;
				a[j][i]=1; // when the graph is undirected
			}
		}
	}
	return 0;
}
