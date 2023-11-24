#include<bits/stdc++.h>
using namespace std;

int n, u, v, cnt, mark[100005];
vector<int> lst[100005];

void init(){
	for(int i=1; i<=n; i++){
		mark[i]=0;
		lst[i].clear();
	}
	cnt=0;
}

void bfs(int i){
	queue<int> q;
	q.push(i); mark[i]=1;
	q.push(-1);
	while(1){
		if(q.front()==-1&&q.size()==1) break;
		i=q.front(); q.pop();
		if(i==-1){
			++cnt;
			q.push(-1);
			continue;
		}
		for(auto j: lst[i]){
			if(mark[j]==0){
				q.push(j); mark[j]=1;
			}
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		init();
		for(int i=1; i<n; i++){
			cin >> u >> v;
			lst[u].push_back(v);
			lst[v].push_back(u);
		}
		
		bfs(1); 
		cout << cnt << "\n";
	}
	return 0;
}
