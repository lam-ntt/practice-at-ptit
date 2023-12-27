#include<bits/stdc++.h>
using namespace std;

int a[305][305], b[5][5];

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cin >> b[i][j];
			}
		}
		
		long long sum=0;
		for(int i=0; i<=n-3; i++){
			for(int j=0; j<=m-3; j++){
				for(int e=0; e<3; e++){
					for(int f=0; f<3; f++){
						sum+=a[i+e][j+f]*b[e][f];
					}
				}
			}
		}
		cout << sum << "\n";
	}
	return 0;
}
