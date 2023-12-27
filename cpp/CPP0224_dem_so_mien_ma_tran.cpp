#include<bits/stdc++.h>
using namespace std;

int n, m;

void erase(int a[105][105], int r, int c){
	a[r][c]=0;
	for(int i=-1; i<=1; i++){
		for(int j=-1; j<=1; j++){
			if(a[r+i][c+j]==1){
				erase(a, r+i, c+j);
			}
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m; ++n; ++m;
		int a[105][105]={0};
		for(int i=1; i<n; i++){
			for(int j=1; j<m; j++){
				cin >> a[i][j];
			}
		}
		
		int cnt=0;
		for(int i=1; i<n; i++){
			for(int j=1; j<m; j++){
				if(a[i][j]==1){
					erase(a, i, j);
					++cnt;
				}
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}
