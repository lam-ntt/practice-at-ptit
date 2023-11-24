#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int tmp;
		priority_queue<ll, vector<ll>, greater<ll>> pq;
		for(int i=0; i<n; i++){
			cin >> tmp;
			pq.push(tmp);
		}
		
		ll sum=0;
		while(pq.size()>1){
			ll a=pq.top(); pq.pop();
			ll b=pq.top(); pq.pop();
			sum+=(a+b);
			sum%=(ll)(1e9+7);
			pq.push((a+b)%(ll)(1e9+7));
		}
		cout << sum << "\n";
	}
	return 0;
}
