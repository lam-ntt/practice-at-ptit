#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll chiaDu(ll a, ll b, ll n){
	ll sum=1;
	for(int i=0; i<b; i++){
		sum*=a;
		sum%=n;
	}
	return sum;
}

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int a[65];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		ll h=1, g=a[0];
		for(int i=0; i<n; i++){
			h*=a[i]; h%=(ll)(1e9+7);
			g=__gcd((int)g, a[i]);
		}
		
		cout << chiaDu(h, g, 1e9+7) << "\n";
	}
	return 0;
}
