#include<bits/stdc++.h>
using namespace std;

int n, a[15];
vector<int> v[15];

void read(){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
}

void solve(){
	for(int i=n; i>=1; i--){
		v[i].clear();
		for(int j=1; j<=i; j++){
			v[i].push_back(a[j]);
		}
		
		for(int j=1; j<=i-1; j++){
			a[j]=a[j]+a[j+1];
		}
	}
	
	for(int i=1; i<=n; i++){
		cout << "[";
		for(int j=0; j<v[i].size()-1; j++){
			cout << v[i][j] << " ";
		}
		cout << v[i][v[i].size()-1] << "] ";
	}
	cout << "\n";	
}

int main(){
	int t; cin >> t;
	while(t--){
		read();
		solve();
	}
	return 0;
}
