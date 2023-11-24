#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n, a[1000005], b[1000005];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n-1; i++) cin >> b[i];
		
		for(int i=0; i<n-1; i++){
			if(a[i]!=b[i]){
				cout << i+1 << "\n";
				break;
			}
		}
	}
	return 0;
}
