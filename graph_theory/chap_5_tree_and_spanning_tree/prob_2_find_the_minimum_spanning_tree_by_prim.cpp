#include<bits/stdc++.h>
using namespace std;

int n, cnt, w, a[105][105], mark[105]={0};
set<int> node1, node2;
vector<pair<int, int>> res;

int main(){
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> a[i][j];
			if(a[i][j]==0&&i!=j) a[i][j]=1e9;
		}
	}
	
	node1.insert(1);
	for(int i=2; i<=n; i++) node2.insert(i);
	
	w=0;
	while(node2.size()!=0){
		int ok=0, mn=1e9, idx1, idx2;
		for(auto i: node1){
			for(auto j: node2){
				if(a[i][j]>0&&a[i][j]<mn){
					mn=a[i][j]; idx1=i; idx2=j;
					ok=1;
				}
			}
		}
		if(ok){
			node1.insert(idx2);
			node2.erase(idx2);
			w+=a[idx1][idx2];
			res.push_back({idx1, idx2});
		}else break;
	}
	
	if(res.size()<n-1) cout << "Not found !";
	else{
		cout << w << "\n";
		for(auto it: res) cout << "(" << it.first << ", " << it.second << ") ";
	}
	return 0;
}

