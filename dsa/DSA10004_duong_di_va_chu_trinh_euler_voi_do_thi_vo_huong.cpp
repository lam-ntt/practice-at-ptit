#include<bits/stdc++.h>
using namespace std;

int deg[1005];

int main(){
	int t; cin >> t;
	while(t--){
		int n, e; cin >> n >> e;
		for(int i=1; i<=n; i++) deg[i]=0;
		int a, b;
		for(int i=1; i<=e; i++){
			cin >> a >> b;
			++deg[a];
			++deg[b];
		}
		
		int cnt=0;
		for(int i=1; i<=n; i++){
			if(deg[i]%2==1) ++cnt;
		}
		if(cnt==0) cout << "2\n";
		else if(cnt==2) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
