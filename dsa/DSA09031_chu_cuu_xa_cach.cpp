#include<bits/stdc++.h>
using namespace std;

int n, k, m, cnt, a[105][105]; string mark[105][105];

void init(){
	for(int i=0; i<=104; i++){
		for(int j=0; j<=104; j++){
			a[i][j]=0;
			mark[i][j]="";
		}
	}
}

int dx[]={-1, 0, 1, 0}, dy[]={0, 1, 0, -1};
	
void bfs(int r, int c){
	int row, col;
	for(int k=0; k<4; k++){
		if(k==0&&mark[r][c].find("t")!=string::npos) continue;
		else if(k==1&&mark[r][c].find("r")!=string::npos) continue;
		else if(k==2&&mark[r][c].find("d")!=string::npos) continue;
		else(k==3&&mark[r][c].find("l")!=string::npos) continue;
		row=r+dx[k], col=c+dy[k];
		if(a[row][col]!=-1&&1<=row&&row<=n&&1<=col&&col<=n){
			if(a[row][col]==1) ++cnt;
			a[row][col]=-1;
			bfs(row, col);
		}		
	}
}

int main(){
	init();
	cin >> n >> k >> m;
	int t1, t2, t3, t4;
	for(int i=1; i<=m; i++){
		cin >> t1 >> t2 >> t3 >> t4;
		if(t1==t3){
			if(t2<t4) mark[t1][t2]+="r", mark[t1][t4]+="l";
			else mark[t1][t4]+="r", mark[t1][t2]+="l";	
		}else if(t2==t4){
			if(t1<t3) mark[t1][t2]+="d", mark[t3][t2]+="t";
			else mark[t3][t2]+="d", mark[t1][t2]+="t";
		}
	}
	for(int i=1; i<=k; i++){
		cin >> t1 >> t2;
		a[t1][t2]=1;
	}

	int res=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(a[i][j]==1){
				cnt=1; a[i][j]=-1;
				bfs(i, j);
				res+=cnt*(n-cnt)/2;
			}
		}
	}
	cout << res << "\n";
	return 0;
}
