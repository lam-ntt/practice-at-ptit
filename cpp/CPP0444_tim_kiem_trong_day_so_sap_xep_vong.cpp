#include<bits/stdc++.h>
using namespace std;

int a[10000005];

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		for(int i=0; i<n; i++){
			if(a[i]==k){
				cout << i+1 << "\n";
				break;
			}
		}
	}
	return 0;
}
