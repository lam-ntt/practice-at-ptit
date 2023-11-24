#include<bits/stdc++.h>
using namespace std;

int n, m, a[505][505];
int dx[]={-1, -1, -1, 0, 1, 1, 1, 0};
int dy[]={-1, 0, 1, 1, 1, 0, -1, -1};

void bfs(int row, int col){
	for(int k=0; k<8; k++){
		int r=row+dx[k];
		int c=col+dy[k];
		if(r>=1&&r<=n&&c>=1&&c<=m&&a[r][c]){
			a[r][c]=0; bfs(r, c);
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++) cin >> a[i][j];
		}
		
		int cnt=0;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				if(a[i][j]){
					++cnt;
					a[i][j]=0; bfs(i, j);
				}
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}
