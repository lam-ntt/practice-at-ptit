#include<bits/stdc++.h>
using namespace std;

int n, fi, se, f, a[105][105], mark[105], before[105];
vector<int> node;

void init(){
	for(int i=1; i<=n; i++){
		mark[i]=0;
		before[i]=0;
	}
}

void bfs(int u){
	queue<int> q;
	q.push(u); mark[u]=1;
	while(!q.empty()){
		u=q.front(); q.pop();
		for(int v=1; v<=n; v++){
			if(mark[v]==0&&a[u][v]){
				before[v]=u;
				q.push(v); mark[v]=1;
			}
		}
	}
} 

int main(){
	cin >> n >> fi >> se;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) cin >> a[i][j];
	}
	
	f=0;
	while(1){
		init(); bfs(fi);
		if(before[se]==0) break;
		int tmp=se; node.clear();
		while(tmp!=0){
			node.push_back(tmp);
			tmp=before[tmp];
		}
		reverse(node.begin(), node.end());
		
		int mn=1e9;
		for(int i=0; i<node.size()-1; i++){
			mn=min(mn, a[node[i]][node[i+1]]);
		}
		for(int i=0; i<node.size()-1; i++){
			a[node[i]][node[i+1]]-=mn;
			a[node[i+1]][node[i]]+=mn;
		}
		f+=mn;
		cout << mn << "\n";
	}
	cout << f;
	return 0;
}
