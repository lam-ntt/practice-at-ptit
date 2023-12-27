#include<bits/stdc++.h>
#define lli unsigned long long int
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		lli n, m; cin >> n >> m;
		lli sum=(n+1)*n/2;
		
		if(n==1){
			cout << "No\n";
			break;
		}
		
		lli a=(sum+m)/2, b=(sum-m)/2;
		if(__gcd(a, b)==1) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}

