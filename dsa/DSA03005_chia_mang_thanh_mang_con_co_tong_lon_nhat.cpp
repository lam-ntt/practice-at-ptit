#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[55];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		
		int sum=0;
		for(int i=0; i<n; i++){
			if(i<min(k, n-k)) sum-=a[i];
			else sum+=a[i];
		}
		cout << sum << "\n";
	}
	return 0;
}
