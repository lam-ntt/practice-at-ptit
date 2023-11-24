#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n, k;

ll solve(ll step, ll pos){
	ll tmp=pow(2, step-1);
	if(pos==tmp) return step;
	else if(pos<tmp) return solve(step-1, pos);
	else return solve(step-1, pos-tmp);
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		cout << solve(n, k) << "\n";
	}
	return 0;
}
