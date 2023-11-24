#include<bits/stdc++.h>
using namespace std;

int n, c[15][15]; 
int ok; string s;

void read(){
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> c[i][j];
		}
	}
}

void tryy(int i, int j){
	if(i==n&&j==n){
		cout << s << " ";
		ok=1;
		return;
	}
	if(i>n||j>n) return;
	
	if(c[i+1][j]){
		s+="D";
		tryy(i+1, j);
		s.erase(s.size()-1, 1);
	}
	if(c[i][j+1]){
		s+="R";
		tryy(i, j+1);
		s.erase(s.size()-1, 1);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		read();
		if(c[1][1]==0){
			cout << "-1\n";
			continue;
		}else{
			s=""; ok=0;
			tryy(1, 1);
			if(!ok) cout << "-1";
			cout << "\n";
		}
	}
	return 0;
}
