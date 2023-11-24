#include<bits/stdc++.h>
using namespace std;

int n, a[105][105], dis[105][105], nxt[105][105];

int main(){
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> a[i][j];
			if(a[i][j]==0&&i!=j) a[i][j]=1e9;
		}
	}
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			dis[i][j]=a[i][j];
			if(a[i][j]!=1e9) nxt[i][j]=j;
		}
	}
	
	for(int mid=1; mid<=n; mid++){
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				if(dis[i][j]>dis[i][mid]+dis[mid][j]){
					dis[i][j]=dis[i][mid]+dis[mid][j];
					nxt[i][j]=nxt[i][mid];
				}
			}
		}
	}
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) cout << dis[i][j] << " ";
		cout << "\n";
	}
	return 0;
}
