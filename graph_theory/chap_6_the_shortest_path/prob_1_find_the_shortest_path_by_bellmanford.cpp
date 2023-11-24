#include<bits/stdc++.h>
using namespace std;

int n, fi, a[105][105], dis[105]={0}, before[105]={0};

int main(){
	cin >> n >> fi;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> a[i][j];
			if(a[i][j]==0&&i!=j) a[i][j]=1e9;
		}
	}
	
	for(int i=1; i<=n; i++){
		dis[i]=a[fi][i];
		before[i]=fi;
	}
	
	int k=n-2;
	while(k--){
		for(int mid=1; mid<=n; mid++){
			for(int i=1; i<=n; i++){
				if(dis[i]>dis[mid]+a[mid][i]){
					dis[i]=dis[mid]+a[mid][i];
					before[i]=mid;
				}
			}
		}
	}
	
	for(int i=1; i<=n; i++) cout << dis[i] << " ";
	return 0;
}
