#include<bits/stdc++.h>
using namespace std;

int n, a[1000005];

int main(){
	int t; cin >> t;
	while(t--){
		vector<int> v;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
			v.push_back(a[i]);
		}
		
		sort(v.begin(), v.end());
		int l, r;
		for(int i=0; i<n; i++){
			if(v[i]!=a[i]){
				l=i; break;
			}
		}
		for(int i=n-1; i>=0; i--){
			if(v[i]!=a[i]){
				r=i; break;
			}
		}
		cout << l+1 << " " << r+1 << "\n";		
	}
	return 0;
}
