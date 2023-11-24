#include<bits/stdc++.h>
using namespace std;

int n, fi, se, a[105][105], mark[105]={0}, before[105]={0};

void dfs(int u){
	mark[u]=1;
	for(int v=1; v<=n; v++){
		if(mark[v]==0&&a[u][v]){
			before[v]=u;
			dfs(v);
		}
	}
}

int main(){
	cin >> n >> fi >> se;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) cin >> a[i][j];
	}
	
	dfs(fi);
	// check path
	if(before[se]==0) cout << "Not found !";
	else{
		stack<int> s;
		int tmp=se;
		while(tmp!=0){
			s.push(tmp);
			tmp=before[tmp];
		}
		
		while(!s.empty()){
			cout << s.top() << " ";
			s.pop();
		}
	}
	return 0;
}
