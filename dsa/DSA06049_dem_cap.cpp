#include<bits/stdc++.h> 
#define ll long long

using namespace std; 
int main (){ 
	int t; cin>>t; 
	while(t--){ 
		ll n, k; cin >> n >> k;
		ll a[n];
		for(int i=0; i<n; i++){ 
			cin >> a[i]; 
		} 
		sort(a, a+n); 
		
		long long res=0; 
		for(int i=0; i<n-1; i++){ 
			res+=lower_bound(a+i+1, a+n, k+a[i])-(a+i+1); 
		} 
		cout << res << endl; 
	} 
}
