#include<bits/stdc++.h>
using namespace std;

int mark[10][10];
int dx[]={-2, -1, 1, 2, 2, 1, -1, -2};
int dy[]={1, 2, 2, 1, -1, -2, -2, -1};

struct pos{
	int r, c;
};

int cmp(pos fi, pos se){
	return fi.r==se.r&&fi.c==se.c;
}

int check(pos fi){
	return 1<=fi.r&&fi.r<=8&&1<=fi.c&&fi.c<=8;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; 
		pos begin, end;
		cin >> s; begin={9-(s[1]-'0'), s[0]-'a'+1};
		cin >> s; end={9-(s[1]-'0'), s[0]-'a'+1};
		for(int i=1; i<=8; i++){
			for(int j=1; j<=8; j++) mark[i][j]=0;
		}
		
		int cnt=0;
		pos flag={-1, -1};
		queue<pos> q;
		q.push(begin);
		q.push(flag);
		mark[begin.r][begin.c]=1;
		while(1){
			if(cmp(q.front(), end)){
				cout << cnt << "\n";
				break;
			}else if(cmp(q.front(), flag)){
				++cnt;
				q.push(flag);
			}else{
				pos root=q.front();
				for(int i=0; i<8; i++){
					pos tmp={root.r+dx[i], root.c+dy[i]};
					if(check(tmp)&&mark[tmp.r][tmp.c]==0){
						q.push(tmp);
						mark[tmp.r][tmp.c]=1;
					}
				}
			}
			q.pop();
		}
	}
	return 0;
}
