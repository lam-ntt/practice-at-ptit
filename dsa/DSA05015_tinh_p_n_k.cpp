#include<bits/stdc++.h>
#define ll long long
#define mod (ll)(1e9+7)
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		if(k>n){
			cout << "0\n";
		}else{
			ll res=1;
			for(int i=n-k+1; i<=n; i++){
				res*=i;
				res%=mod;
			}
			cout << res << "\n";
		}
	}
	return 0;
}
