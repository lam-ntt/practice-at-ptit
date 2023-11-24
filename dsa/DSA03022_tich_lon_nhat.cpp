#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, a[10005];

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	
	ll mx1=max((ll)a[0]*a[1], (ll)a[n-1]*a[n-2]);
	ll mx2=max((ll)a[0]*a[1]*a[n-1], (ll)a[n-1]*a[n-2]*a[n-3]);
	cout << max(mx1, mx2);
	return 0;
}
