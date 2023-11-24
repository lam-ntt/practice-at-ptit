#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k, a[105];
		cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		
		int cnt=0, l, u;
		for(int i=0; i<n-1; i++){
			l=lower_bound(a+i+1, a+n, k-a[i])-(a+n);
			u=upper_bound(a+i+1, a+n, k-a[i])-(a+n);
			cnt+=(u-l);
		}
		cout << cnt << "\n";
	}
	return 0;
}
