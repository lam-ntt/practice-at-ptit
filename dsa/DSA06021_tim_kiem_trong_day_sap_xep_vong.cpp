#include<bits/stdc++.h>
using namespace std;

int n, x, a[10000005];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> x;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		for(int i=0; i<n; i++){
			if(a[i]==x){
				cout << i+1 << "\n";
				break;
			}
		}
	}
	return 0;
}
