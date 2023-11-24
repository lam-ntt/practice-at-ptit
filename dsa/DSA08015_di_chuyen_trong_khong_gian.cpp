#include<bits/stdc++.h>
using namespace std;

char a[35][35][35];
int n, m, p, mark[35][35][35]; 
int dx[]={1, 0, -1, 0, 0, 0};
int dy[]={0, 1, 0, -1, 0, 0};
int dz[]={0, 0, 0, 0, 1, -1};

struct pos{
	int r, c, h;
};

int cmp(pos fi, pos se){
	return fi.r==se.r&&fi.c==se.c&&fi.h==se.h;
}

int check(int r, int c, int h){
	return 0<=r&&r<n&&0<=c&&c<m&&0<=h&&h<p;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m >> p;
		pos begin, end;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				for(int k=0; k<p; k++){
					cin >> a[i][j][k];
					if(a[i][j][k]=='S') begin={i, j, k};
					if(a[i][j][k]=='E') end={i, j, k};
					mark[i][j][k]=0;
				}
			}
		}
		
		int cnt=0; pos sign={-1, -1, -1};
		queue<pos> q;
		q.push(begin);
		q.push(sign);
		mark[begin.r][begin.c][begin.h]=1;
		
		while(1){
			if(q.size()==1&&cmp(q.front(), sign)){
				cout << "-1\n";
				break;
			}else if(cmp(q.front(), end)){
				cout << cnt << "\n";
				break;
			}
			
			if(cmp(q.front(), sign)){
				++cnt;
				q.push(sign);
			}else{
				for(int i=0; i<6; i++){
					int row=q.front().r+dx[i];
					int col=q.front().c+dy[i];
					int hei=q.front().h+dz[i];
					if(check(row, col, hei)&&a[row][col][hei]!='#'&&mark[row][col][hei]==0){
						q.push({row, col, hei});
						mark[row][col][hei]=1;
					}
				}
			}
			q.pop();
		}		
	}
	return 0;
}
