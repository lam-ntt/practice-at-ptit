#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll cnt=0;
		queue<ll> q;
		q.push(1);
		
		while(q.front()<=n){
			++cnt;
			q.push(q.front()*10);
			q.push(q.front()*10+1);
			q.pop();
		}
		cout << cnt << "\n";
	}
	return 0;
}
