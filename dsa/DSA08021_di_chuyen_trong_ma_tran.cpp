#include<bits/stdc++.h>
using namespace std;

int n, m, a[1005][1005], mark[1005][1005];

struct pos{
	int r;
	int c;
};

int cmp(pos fi, pos se){
	return fi.r==se.r&&fi.c==se.c;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
				mark[i][j]=0;
			}
		}
		
		int cnt=0;
		pos node{-1, -1}, end={n-1, m-1};
		queue<pos> q;
		q.push({0, 0});
		q.push(node);
		mark[0][0]=1;
		
		while(1){
			if(q.size()==1&&cmp(q.front(), node)){
				cout << "-1\n";
				break;
			}else if(cmp(q.front(), end)){
				cout << cnt << "\n";
				break;
			}
			
			if(cmp(q.front(), node)){
				++cnt;
				q.pop();
				q.push(node);
			}else{
				pos tmp=q.front();
				int fi=tmp.r+a[tmp.r][tmp.c];
				int se=tmp.c+a[tmp.r][tmp.c];
				if(0<=fi&&fi<n&&mark[fi][tmp.c]==0){
					q.push({fi, tmp.c});
					mark[fi][tmp.c]=1;
				}
				if(0<=se&&se<m&&mark[tmp.r][se]==0){
					q.push({tmp.r, se});
					mark[tmp.r][se]=1;
				}
				q.pop();
			}	
		}
	}
	return 0;
}
