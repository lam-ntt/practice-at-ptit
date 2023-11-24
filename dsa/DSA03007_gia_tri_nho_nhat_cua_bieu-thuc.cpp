#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		lli a[n], b[n];
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n; i++) cin >> b[i];
		sort(a, a+n);
		sort(b, b+n, greater<lli>());
		
		lli sum=0;
		for(int i=0; i<n; i++){
			sum+=a[i]*b[i];
		}
		cout << sum << "\n";
	}
	return 0;
}
