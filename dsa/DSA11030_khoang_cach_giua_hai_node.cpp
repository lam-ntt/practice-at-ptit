#include<bits/stdc++.h>
using namespace std;

int n, u, v, q, a[1005][1005], dis[1005][1005], nxt[1005][1005];

void init(){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==j) a[i][j]=0;
			else a[i][j]=1e9;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n; init();
		for(int i=1; i<n; i++){
			cin >> u >> v;
			a[u][v]=1, a[v][u]=1;
		}	
		
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				dis[i][j]=a[i][j];
				nxt[i][j]=j;
			}
		}
		
		for(int mid=1; mid<=n; mid++){
			for(int i=1; i<=n; i++){
				if(i==mid) continue;
				for(int j=1; j<=n; j++){
					if(j==i||j==mid) continue;
					if(dis[i][j]>dis[i][mid]+dis[mid][j]){
						dis[i][j]=dis[i][mid]+dis[mid][j];
						nxt[i][j]=nxt[i][mid];
					}
				}
			}
		}
		
		cin >> q;
		while(q--){
			cin >> u >> v;
			int tmp=u, cnt=0;
			while(u!=v){
				++cnt;
				u=nxt[u][v];
			}
			cout << cnt << "\n";
		}
	}
	return 0;
}
