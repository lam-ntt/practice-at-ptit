#include<bits/stdc++.h>
using namespace std;

int n, m, p, a[100005], b[100005], c[100005];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m >> p;
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<m; i++) cin >> b[i];
		for(int i=0; i<p; i++) cin >> c[i];
		
		vector<int> v;
		int i=0, j=0, k=0;
		while(i<n&&j<m&&k<p){
			if(a[i]==b[j]&&a[i]==c[k]){
				v.push_back(a[i]);
				++i; ++j; ++k;
			}
			else if(a[i]<=c[k]) ++i;
			else if(b[j]<=c[k]) ++j;
			else ++k;
		}
		
		for(auto it: v) cout << it << " ";
		if(v.size()!=0) cout << "\n";
		else cout << "NO\n";
	}
	return 0;
}
