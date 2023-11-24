#include<bits/stdc++.h>
#define ll long long
#define mod (ll)(1e9+7)
using namespace std;

ll c[1005][1005];

void init(){
	for(int i=0; i<=1000; i++){
		for(int j=0; j<=1000; j++){
			c[i][j]=-1;
		}
	}
}

ll cal(ll n, ll k){
	if(c[n][k]!=-1) return c[n][k];
	
	if(n==k||k==0) c[n][k]=1;
	else c[n][k]=(cal(n-1, k-1)+cal(n-1, k))%mod;
	return c[n][k];
}

int main(){
	init();
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
		cout << cal(n, k) << "\n";
	}
	return 0;
}
