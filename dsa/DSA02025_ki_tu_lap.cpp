#include<bits/stdc++.h>
using namespace std;

int n; string s[15]; int c[15][15];
int a[15], mark[15]={0}, f=0, f_min=1000000000;

int checkC(int i, int j){
	int l=0, r=0, cnt=0;
	while(l<s[i].size()&&r<s[j].size()){
		if(s[i][l]==s[j][r]){
			++cnt; ++l; ++r;
		}
		else if(s[i][l]<s[j][r]) ++l;
		else ++r;
	}
	return cnt;
}

void connect(){
	for(int i=1; i<n; i++){
		for(int j=i+1; j<=n; j++){
			c[i][j]=checkC(i, j);
			c[j][i]=c[i][j];
		}
	}
}

void tryy(int i){
	for(int j=1; j<=n; j++){
		if(mark[j]==0){
			a[i]=j;
			mark[j]=1;
			f+=c[a[i-1]][a[i]];
			if(i==n) f_min=min(f_min, f);
			else if(f<f_min) tryy(i+1);
			f-=c[a[i-1]][a[i]];
			mark[j]=0;
		}
	}
}

int main(){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> s[i];
	}
	
	connect();
	for(int i=1; i<=n; i++){
		a[1]=i;
		mark[i]=1;
		tryy(2);
		mark[i]=0;
	}
	cout << f_min << "\n";
	return 0;
}
