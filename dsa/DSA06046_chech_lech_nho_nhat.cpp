#include<bits/stdc++.h>
using namespace std;

int n, a[100005];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		
		int dis=1e9;
		for(int i=0; i<n-1; i++){
			dis=min(dis, a[i+1]-a[i]);
		}
		cout << dis << "\n";
	}
	return 0;
}
