#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n, x, a[1000005];

ll solve(ll l, ll r){
	if(l>r) return -1;
	
	ll m=(l+r)/2;
	if(a[m]==x) return m;
	else if(a[m]<x) return max(m, solve(m+1, r));
	else return solve(l, m-1);
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> x;
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		cout << solve(1, n) << "\n";
	}
	return 0;
}
