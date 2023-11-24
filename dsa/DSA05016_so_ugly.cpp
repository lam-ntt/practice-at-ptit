#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set<ll> s;
		s.insert(1);
		int cnt=1;
		while(cnt<n){
			++cnt;
			ll tmp=*s.begin();
			s.erase(s.begin());
			s.insert(tmp*2);
			s.insert(tmp*3);
			s.insert(tmp*5);
		}
		cout << *s.begin() << "\n";
	}
	return 0;
}
