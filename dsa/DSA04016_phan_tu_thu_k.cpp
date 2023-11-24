#include<bits/stdc++.h>
using namespace std;

int n, m, k, a[1000005], b[1000005];
vector<int> v;

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m >> k;
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<m; i++) cin >> b[i];
		
		int i=0, j=0; v.clear();
		while(i<n&&j<m){
			if(a[i]==b[j]){
				v.push_back(a[i]);
				v.push_back(b[j]);
				++i; ++j;
			}
			else if(a[i]<b[j]) v.push_back(a[i++]);
			else v.push_back(b[j++]);
		}
		while(i<n) v.push_back(a[i++]);
		while(j<m) v.push_back(b[j++]);
		cout << v[k-1] << "\n";
	}
	return 0;
}
