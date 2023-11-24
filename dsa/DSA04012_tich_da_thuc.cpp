#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n, m, a[105], b[105];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<m; i++) cin >> b[i];
		
		ll c[n+m]={0};
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				c[i+j]+=a[i]*b[j];
			}
		}
		
		int limit=n+m-2;
		for(int i=0; i<=limit; i++) cout << c[i] << " ";
		cout << "\n";
	}
	return 0;
}
