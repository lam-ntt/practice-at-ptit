#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, a[10005];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		
		ll cnt=0;
		for(int i=0; i<n-1; i++){
			cnt+=lower_bound(a+i+1, a+n, a[i]+k)-(a+i+1);
		}
		cout << cnt << "\n";
	}
	return 0;
}
