#include<bits/stdc++.h>
#define ll long long
#define mod (ll)(1e9+7)
using namespace std;

ll n, r;

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
		n%=(ll)(1e10);
		string s=to_string(n);
		reverse(s.begin(), s.end());
		r=stoll(s);
		cout << solve(n, r) << "\n";
	}
	return 0;
}
