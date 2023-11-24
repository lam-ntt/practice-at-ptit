#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n], b[m];
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<m; i++) cin >> b[i];
		sort(b, b+m);
		
		map<int, int> mp;
		for(int i=0; i<m; i++){
			if(b[i]<5) ++mp[b[i]];
		}
		
		int cnt=0;
		for(int i=0; i<n; i++){
			if(a[i]==0) continue;
			else if(a[i]==1) cnt+=mp[0];
			else{
				cnt+=b+m-upper_bound(b, b+m, a[i]);
				cnt+=mp[0]+mp[1];
				if(a[i]==2) cnt-=mp[3]+mp[4];
				if(a[i]==3) cnt+=mp[2];
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}
