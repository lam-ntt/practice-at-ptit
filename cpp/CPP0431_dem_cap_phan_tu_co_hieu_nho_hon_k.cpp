#include<bits/stdc++.h>
using namespace std;

int a[100005];

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		
		long long cnt=0;
		for(int i=0; i<n; i++){
			auto it=upper_bound(a, a+n, a[i]+k-1);
			cnt+=(it-a)-i-1;
		}
		cout << cnt << "\n";
	}
	return 0;
}
