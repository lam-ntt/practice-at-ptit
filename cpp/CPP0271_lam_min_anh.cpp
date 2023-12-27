#include<bits/stdc++.h>
using namespace std;

int a[505][505];

int main(){
	int t; cin >> t;
	while(t--){
		int n, m, l; cin >> n >> m >> l;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				cin >> a[i][j];
			}
		}
		
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
			}
		}
		
		double sum;
		for(int i=l; i<=n; i++){
			for(int j=l; j<=m; j++){
				sum=0;
				sum=a[i][j]-a[i-l][j]-a[i][j-l]+a[i-l][j-l];
				cout << floor(sum/l/l) << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
