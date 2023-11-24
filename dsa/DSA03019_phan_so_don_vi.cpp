#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll m, ll n){
	int tmp;
	
	while(1){
		if(n%m==0){
			cout << "1/" << n/m << "\n";
			break;
		}else{
			tmp=n/m+1;
			cout << "1/" << tmp << " + ";
			m=m*tmp-n;
			n*=tmp;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		ll a, b; cin >> a >> b;
		solve(a, b);
	}
	return 0;
}
