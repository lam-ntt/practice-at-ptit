#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k, a[1005];
		cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		sort(a, a+n, greater<int>());
		for(int i=0; i<k; i++){
			cout << a[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
