#include<bits/stdc++.h>
#define ll long long
#define mod (ll)(1e9+7)
using namespace std;

ll solve(ll num, ll base){
	if(base==0) return 1;
	
	ll tmp=solve(num, base/2);
	if(base%2==0) return tmp*tmp%mod;
	else return (tmp*tmp%mod)*num%mod;
}

int main(){
	while(1){
		ll a, b; cin >> a >> b;
		if(a==0&&b==0) break;
		cout << solve(a, b) << "\n";
	}
	return 0;
}
