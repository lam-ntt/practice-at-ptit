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
	
	set<int> s;
	for(int i=1; i<=n; i++) s.insert(i);
	
	int mid=fi; s.erase(fi);
	while(s.size()!=0){
		int node=*s.begin();
		for(auto it: s){
			if(dis[it]>dis[mid]+a[mid][it]){
				dis[it]=dis[mid]+a[mid][it];
				before[it]=mid;
			}
			if(dis[it]<dis[node]) node=it;
		}
		mid=node; s.erase(node);
	}
	
	for(int i=1; i<=n; i++) cout << dis[i] << " ";	
	return 0;
}
