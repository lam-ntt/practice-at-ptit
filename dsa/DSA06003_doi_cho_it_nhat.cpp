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
		
		int cnt=0;
		for(int i=0; i<n-1; i++){
			int idx=i;
			for(int j=i+1; j<n; j++){
				if(a[j]<a[idx]){
					idx=j;
				}
			}
			if(idx!=i){
				swap(a[i], a[idx]); ++cnt;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}
