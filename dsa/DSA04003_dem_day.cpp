#include<bits/stdc++.h>
#define ll long long
#define mod 123456789
using namespace std;

ll n;

ll solve(ll num, ll base){
	if(base==0) return 1;
	ll tmp=solve(num, base/2);
	if(base%2==0) return tmp*tmp%mod;
	else return (tmp*tmp%mod)*num%mod;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		if(n==0) cout << "0\n";
		else cout << solve(2, n-1) << "\n";
	}
	return 0;
}
