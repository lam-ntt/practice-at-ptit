#include<bits/stdc++.h>
using namespace std;

int n, a[15];

void read(){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
}

void solve(){
	for(int i=n; i>=1; i--){
		cout << "[";
		for(int j=1; j<i; j++){
			cout << a[j] << " ";
		}
		cout << a[i] << "]\n";
		
		for(int j=1; j<i; j++){
			a[j]=a[j]+a[j+1];
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		read();
		solve();
	}
	return 0;
}
