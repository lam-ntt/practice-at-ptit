#include<bits/stdc++.h>
using namespace std;

int n, a[105][105];

void solve(int u){
	for(int v=1; v<=n; v++){
		if(a[u][v]==2){
			a[u][v]=1;
			a[v][u]=0;
			solve(v);
		}
	}
}

int main(){
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> a[i][j];
			if(a[i][j]) a[i][j]=2;
		}
	}
	
	// direct graph
	solve(1);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) cout << a[i][j] << " ";
		cout << "\n";
	}
	return 0;
}
