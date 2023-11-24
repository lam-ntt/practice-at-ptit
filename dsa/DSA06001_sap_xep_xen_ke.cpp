#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, a[1005];
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		
		int l=0, r=n-1;
		while(l<=r){
			if(l!=r) cout << a[r] << " " << a[l] << " ";
			else cout << a[r] << " ";
			++l; --r;
		}
		cout << "\n";
	}
	return 0;
}
