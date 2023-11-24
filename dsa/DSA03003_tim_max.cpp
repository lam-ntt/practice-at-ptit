#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, a[10000005];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		
		ll sum=0;
		for(int i=0; i<n; i++){
			sum+=a[i]*i;
			sum=sum%(ll)(1e9+7);
		}
		cout << sum << "\n";
	}
	return 0;
}
