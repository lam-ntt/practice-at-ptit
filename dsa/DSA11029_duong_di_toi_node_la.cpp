#include<bits/stdc++.h>
using namespace std;

int n, u, v, mark[1005], before[1005]; 
vector<int> lst[1005];
set<int> leave;

void init(){
	for(int i=1; i<=n; i++){
		mark[i]=0;
		before[i]=0;
		lst[i].clear();
	}
	leave.clear();
}

void dfs(int i){
	mark[i]=1;
	for(auto j: lst[i]){
		if(mark[j]==0){
			before[j]=i;
			dfs(j);
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n; init();
		for(int i=1; i<n; i++){
			cin >> u >> v;
			lst[u].push_back(v);
		}
		for(int i=1; i<=n; i++) if(lst[i].size()==0) leave.insert(i);
		
		dfs(1);
		for(auto it: leave){
			int tmp=it;
			stack<int> s;
			while(tmp!=0){
				s.push(tmp);
				tmp=before[tmp];
			}
			while(!s.empty()){
				cout << s.top() << " ";
				s.pop();
			}
			cout << "\n";
		}
	}
	return 0;
}
