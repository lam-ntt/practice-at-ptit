#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n, a[1005], l[1005], r[1005];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		for(int i=0; i<n; i++){
			l[i]=a[i];
			for(int j=0; j<i; j++){
				if(a[j]<=a[i]) l[i]=max(l[i], l[j]+a[i]);
			}
		}
		for(int i=n-1; i>=0; i--){
			r[i]=a[i];
			for(int j=n-1; j>i; j--){
				if(a[j]<=a[i]) r[i]=max(r[i], r[j]+a[i]);
			}
		}
		
		ll mx=-1;
		for(int i=0; i<n; i++){
			mx=max(mx, r[i]+l[i]-a[i]);
		}
		cout << mx << "\n";
	}
	return 0;
}
