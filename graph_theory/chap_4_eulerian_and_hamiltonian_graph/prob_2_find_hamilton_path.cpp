#include<bits/stdc++.h>
using namespace std;

int n, fi, a[105][105], mark[105]={0}, x[105];

void printHamiltonPath(){
	for(int i=1; i<=n; i++) cout << x[i] << " ";
	cout << "\n";
}

void tryy(int i){
	for(int j=1; j<=n; j++){
		if(mark[j]==0&&a[x[i-1]][j]){
			mark[j]=1;
			x[i]=j;
			if(i==n&&a[x[i]][x[1]]) printHamiltonPath();
			else if(i<n) tryy(i+1);
			mark[j]=0;
		}
	}
}

int main(){
	cin >> n >> fi;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) cin >> a[i][j];
	}
	
	x[1]=fi;
	mark[fi]=1;
	tryy(2);
	return 0;
}
