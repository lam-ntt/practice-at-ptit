#include<bits/stdc++.h>
using namespace std;

int ok, parent[1005],  num[1005];

void init(){
	ok=1;
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
	if(a==b) ok=0;
	else{
		if(num[a]<num[b]) swap(a, b);
		parent[b]=a;
		num[a]+=num[b];
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		init();
		int a, b;
		for(int i=1; i<n; i++){
			cin >> a >> b;
			if(ok) unite(a, b);
		}
		
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
}
