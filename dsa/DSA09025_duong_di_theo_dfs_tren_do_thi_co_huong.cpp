#include<bits/stdc++.h>
using namespace std;

int mark[1005], before[1005];
list<int> lst[1005];

void init(){
	for(int i=1; i<=1000; i++){
		mark[i]=0;
		before[i]=0;
	}
}

void dfs(int u){
	mark[u]=1;
	for(auto v: lst[u]){
		if(mark[v]==0){
			before[v]=u;
			dfs(v);
		}
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		int n, e, s, t; cin >> n >> e >> s >> t;
		for(int i=1; i<=n; i++) lst[i].clear();
		int a, b; 
		for(int i=1; i<=e; i++){
			cin >> a >> b;
			lst[a].push_back(b);
		}
		
		init();
		dfs(s);
		if(before[t]==0) cout << "-1\n";
		else{
			stack<int> st;
			while(t!=0){
				st.push(t);
				t=before[t];
			}
			while(!st.empty()){
				cout << st.top() << " ";
				st.pop();
			}
			cout << "\n";
		}
	}
	return 0;
}
