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
			deg[a]-=1;
			deg[b]+=1;
		}
		
		int cnt=0;
		for(int i=1; i<=n; i++){
			if(deg[i]!=0) ++cnt;
		}
		if(cnt==0) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
