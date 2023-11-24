#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll countZero(ll n){
	if(n==1) return 0;
	ll cnt=0;
	if(n%2==0) ++cnt;
	cnt+=countZero(n/2)*2;
	return cnt;
}

ll cal(ll n, ll l, ll r){
	if(l>r) return 0;
	ll m=(n+countZero(n)+1)/2, cnt=0;
	if(m>=l&&m<=r){
		if(n%2==0) ++cnt;
		cnt+=cal(n/2, l, m-1);
		cnt+=cal(n/2, 1, r-m);
	}
	else if(m<l) cnt+=cal(n/2, l-m, r-m);
	else if(m>r) cnt+=cal(n/2, l, r);
	return cnt;
}

int main(){
	int t; cin >> t;
	while(t--){
		ll n, l, r; cin >> n >> l >> r;
		cout << r-l+1-cal(n, l, r) << "\n";
	}
	return 0;
}
