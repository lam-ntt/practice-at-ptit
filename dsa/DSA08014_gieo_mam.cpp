#include<bits/stdc++.h>
#define fi first
#define se second
using namespace std;

int n, m, a[505][505];
int dx[]={-1, 0, 1, 0};
int dy[]={0, 1, 0, -1};

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		queue<pair<int, int>> q;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
				if(a[i][j]==2) q.push({i, j});
			}
		}

		int day=1, cnt=0;
		pair<int, int> it;
		while(1){
			int num=q.size();
			while(num--){
				it=q.front();
				for(int k=0; k<4; k++){
					int r=it.fi+dx[k], c=it.se+dy[k];
					if(0<=r&&r<n&&0<=c&&c<m&&a[r][c]==1){
						a[r][c]=2; ++cnt;
						q.push({r, c});
					}
				}
				q.pop();
			}
			
			if(cnt==0){
				--day; break;
			}else{
				++day; cnt=0;
			}
		}
		
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++) if(a[i][j]==1) day=-1;
		}
		cout << day << "\n";
	}
	return 0;
}
