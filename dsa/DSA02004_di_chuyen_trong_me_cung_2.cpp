#include<bits/stdc++.h>
using namespace std;

int n, ok, a[10][10], mark[10][10];
string s;

void readAndInit(){
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> a[i][j];
		}
	}

	s=""; ok=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			mark[i][j]=0;
		}
	}
	mark[1][1]=1;
}

void tryy(string s, int i, int j){
	if(i==n&&j==n){
		cout << s << " ";
		ok=1; return;
	}
	if(i>n||j>n) return;

	if(a[i+1][j]&&mark[i+1][j]==0){
		mark[i+1][j]=1;
		tryy(s+"D", i+1, j);
		mark[i+1][j]=0;
	}
	if(a[i][j-1]&&mark[i][j-1]==0){
		mark[i][j-1]=1;
		tryy(s+"L", i, j-1);
		mark[i][j-1]=0;
	}
	if(a[i][j+1]&&mark[i][j+1]==0){
		mark[i][j+1]=1;
		tryy(s+"R", i, j+1);
		mark[i][j+1]=0;
	}
	if(a[i-1][j]&&mark[i-1][j]==0){
		mark[i-1][j]=1;
		tryy(s+"U", i-1, j);
		mark[i-1][j]=0;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		readAndInit();
		
		if(a[1][1]==0){
			cout << "-1\n";
		}else{
			tryy("", 1, 1);
			if(!ok) cout << "-1";
			cout << "\n";
		}
	}
	return 0;
}
