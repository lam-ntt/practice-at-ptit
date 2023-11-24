#include<bits/stdc++.h>
using namespace std;

int parent[1005], num[1005];

void init(){
	for(int i=1; i<=1000; i++){
		parent[i]=i;
		num[i]=1;
	}
}

int find(int n){
	if(n!=parent[n]) parent[n]=find(parent[n]);
	return parent[n];
}

void unite(int a, int b){
	a=find(a);
	b=find(b);
	if(a!=b){
		if(num[a]<num[b]) swap(a, b);
		parent[b]=a;
		num[a]+=num[b];
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		init();
		int n, e; cin >> n >> e;
		int a, b;
		for(int i=1; i<=e; i++){
			cin >> a >> b;
			unite(a, b);
		}	
		for(int i=1; i<=n; i++) parent[i]=find(i);
		
		int q; cin >> q;
		while(q--){
			cin >> a >> b;
			if(parent[a]==parent[b]) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	return 0;
}
