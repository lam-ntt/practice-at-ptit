#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n, q; cin >> n >> q;
		int arr[10005];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		while(q--){
			int l, r; cin >> l >> r;
			int sum=0;
			for(int i=l-1; i<r; i++){
				sum+=arr[i];
			}
			cout << sum << "\n";
		}
	}
	return 0;
}
