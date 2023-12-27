#include<bits/stdc++.h>
using namespace std;

int a[25][25];
int n, m;

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m; char k; int cnt=0;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> k;
				if(k=='O') {
					a[i][j]=1; ++cnt;
				}
				else a[i][j]=2;
			}
		}
		
		// O is 1, O' is -1, X is 2
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(i==0||i==n-1||j==0||j==m-1){
					if(a[i][j]==1){
						a[i][j]=-1; --cnt;
					}
				}
			}
		}
		
		while(cnt--){
			for(int i=0; i<n; i++){
				for(int j=0; j<m; j++){
					if(a[i][j]==-1){
						if(a[i-1][j]==1) a[i-1][j]=-1;
						if(a[i+1][j]==1) a[i+1][j]=-1;
						if(a[i][j-1]==1) a[i][j-1]=-1;
						if(a[i][j+1]==1) a[i][j+1]=-1;
					}
				}
			}
		}
		
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(a[i][j]==-1) cout << "O ";
				else cout << "X "; 
			}
			cout << "\n";
		}
	}
	return 0;
}
