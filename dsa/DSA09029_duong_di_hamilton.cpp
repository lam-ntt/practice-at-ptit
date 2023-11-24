#include<bits/stdc++.h>
using namespace std;

int n, e, ok, x[105], mark[105];
list<int> lst[105];

void init(){
	for(int i=1; i<=100; i++){
		lst[i].clear();
		mark[i]=0;
	}
	ok=0;
}

void tryy(int i){
	if(ok) return;
	for(auto j: lst[x[i-1]]){
		if(mark[j]==0){
			x[i]=j;
			mark[j]=1;
			if(i==n){
				ok=1; break;
			}
			else tryy(i+1);
			mark[j]=0;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		init();
		cin >> n >> e;
		int a, b;
		for(int i=1; i<=e; i++){
			cin >> a >> b;
			lst[a].push_back(b);
			lst[b].push_back(a);
		}
		
		for(int i=1; i<=n; i++){
			if(ok) break;
			x[1]=i; 
			mark[i]=1;
			tryy(2);
			mark[i]=0;
		}
		if(ok) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
