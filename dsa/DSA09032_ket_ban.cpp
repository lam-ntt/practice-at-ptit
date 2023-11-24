#include<bits/stdc++.h>
using namespace std;

int mx, parent[100005], num[100005];

void init(){
	mx=-1;
	for(int i=1; i<=100000; i++){
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
		mx=max(mx, num[a]);
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
		
		cout << mx << "\n";
	}
	return 0;
}
