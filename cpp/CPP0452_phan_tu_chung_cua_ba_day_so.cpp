#include<bits/stdc++.h>
using namespace std;

long long a[1000005], b[1000005], c[1000005];

int main(){
	int t; cin >> t;
	while(t--){
		int n, m, q; cin >> n >> m >> q;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
		}
		for(int i=0; i<q; i++){
			cin >> c[i];
		}
		
		vector<long long> v;
		int e=0, f=0;
		while(e<n&&f<m){
			if(a[e]==b[f]){
				v.push_back(a[e]);
				++e; ++f;
			}else if(a[e]<b[f]){
				++e;
			}else{
				++f;
			}
		}
		
		int g=0, h=0; int ok=0;
		while(g<v.size()&&h<q){
			if(v[g]==c[h]){
				cout << v[g] << " ";
				++g; ++h; ok=1;
			}else if(v[g]<c[h]){
				++g;
			}else{
				++h;
			}
		}
		
		if(!ok){
			cout << "-1";
		}
		cout << "\n";
	}
	return 0;
}
