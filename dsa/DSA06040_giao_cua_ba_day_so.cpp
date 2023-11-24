#include<bits/stdc++.h>
#define ll long long
#define MAX 1000005
using namespace std;

int n, m, p;
ll a[MAX], b[MAX], c[MAX];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m >> p;
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<m; i++) cin >> b[i];
		for(int i=0; i<p; i++) cin >> c[i];
		
		vector<ll> v;
		int idx1=0, idx2=0, idx3=0;
		while(idx1<n&&idx2<m&&idx3<p){
			if(a[idx1]==b[idx2]&&b[idx2]==c[idx3]){
				v.push_back(a[idx1]);
				++idx1; ++idx2; ++idx3;
			}
			else if(a[idx1]<b[idx2]) ++idx1;
			else if(c[idx3]<b[idx2]) ++idx3;
			else ++idx2;
		}
		
		for(auto it: v) cout << it << " ";
		if(v.size()==0) cout << "-1";
		cout << "\n";
	}
	return 0;
}
