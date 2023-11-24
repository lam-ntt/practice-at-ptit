#include<bits/stdc++.h>
#define ll long long
using namespace std;

int m, n, tmp;

ll giaiThua(int e){
	if(e==0) return 1;
	return e*giaiThua(e-1);
}

ll c(int e, int f){
	return giaiThua(f)/(giaiThua(e)*giaiThua(f-e));
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> m >> n;
		for(int i=1; i<=m; i++){
			for(int j=1; j<=n; j++){
				cin >> tmp;
			}
		}
		cout << c(m-1, m+n-2) << "\n";
	}
	return 0;
}
