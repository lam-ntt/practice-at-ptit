#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m, tmp, a=-1e9, b=1e9;
		cin >> n >> m;
		for(int i=0; i<n; i++){
			cin >> tmp;
			a=max(a, tmp);
		}
		for(int i=0; i<m; i++){
			cin >> tmp;
			b=min(b, tmp);
		}
		
		cout << (long long)a*b << "\n";
	}
	return 0;
}
