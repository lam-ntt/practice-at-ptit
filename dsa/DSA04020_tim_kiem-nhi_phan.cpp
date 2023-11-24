#include<bits/stdc++.h>
using namespace std;

int n, k, a[100005];

int solve(int l, int r){
	if(l>r) return -1;
	
	int m=(l+r)/2;
	if(a[m]==k) return m;
	else if(a[m]<k) return solve(m+1, r);
	else return solve(l, m-1);
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		int tmp=solve(0, n-1);
		if(tmp==-1) cout << "NO\n";
		else cout << tmp+1 << "\n";
	}
	return 0;
}
