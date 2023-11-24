#include<bits/stdc++.h>
using namespace std;

int n, a[10000005];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		int idx=-1;
		for(int i=0; i<n-1; i++){
			if(a[i]>a[i+1]){
				idx=i; break;
			}
		}
		cout << idx+1 << "\n";
	}
	return 0;
}
