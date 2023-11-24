#include<bits/stdc++.h>
using namespace std;

int n, k, a[100005];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		
		long long cnt=0;
		for(int i=0; i<n; i++){
			int pos1=lower_bound(a+i+1, a+n, k-a[i])-a;
			int pos2=upper_bound(a+i+1, a+n, k-a[i])-a;
			cnt+=pos2-pos1;
		}
		cout << cnt << "\n";
	}
	return 0;
}
