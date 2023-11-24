#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k, a[1005];
		cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		int cnt=0;
		for(int i=0; i<n; i++){
			if(a[i]==k) ++cnt;
		}
		if(cnt==0) cout << "-1\n";
		else cout << cnt << "\n";	
	}
	return 0;
}
