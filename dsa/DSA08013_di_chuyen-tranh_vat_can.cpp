#include<bits/stdc++.h>
using namespace std;

int n, mark[105][105]; char a[105][105];

struct pos{
	int r, c;
};

int cmp(pos fi, pos se){
	return fi.r==se.r&&fi.c==se.c;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> a[i][j];
				mark[i][j]=0;
			}
		}
		pos begin, end;
		cin >> begin.r >> begin.c >> end.r >> end.c;
		pos sign={-1, -1};
		
		int cnt=0;
		queue<pos> q;
		q.push(begin);
		q.push(sign);
		mark[begin.r][begin.c]=1;
		while(1){
			if(cmp(q.front(), end)){
				cout << cnt << "\n";
				break;
			}else if(cmp(q.front(), sign)){
				++cnt;
				q.push(sign);
			}else{
				int ro=q.front().r, co=q.front().c, tmp=1;
				while(ro+tmp<n&&a[ro+tmp][co]!='X'){
					if(mark[ro+tmp][co]==0){
						q.push({ro+tmp, co});
						mark[ro+tmp][co]=1;
					}
					++tmp;
				}
				tmp=1;
				while(ro-tmp>=0&&a[ro-tmp][co]!='X'){
					if(mark[ro-tmp][co]==0){
						q.push({ro-tmp, co});
						mark[ro-tmp][co]=1;
					}
					++tmp;
				}		
				tmp=1;
				while(co+tmp<n&&a[ro][co+tmp]!='X'){
					if(mark[ro][co+tmp]==0){
						q.push({ro, co+tmp});
						mark[ro][co+tmp]=1;
					}
					++tmp;
				}
				tmp=1;
				while(co-tmp>=0&&a[ro][co-tmp]!='X'){
					if(mark[ro][co-tmp]==0){
						q.push({ro, co-tmp});
						mark[ro][co-tmp]=1;
					}
					++tmp;
				}
			}
			q.pop();
		}	
	}
	return 0;
}
