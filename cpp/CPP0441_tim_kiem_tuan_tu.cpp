#include<bits/stdc++.h>
using namespace std;

int a[1000005];

int check(int n, int s){
	for(int i=0; i<n; i++){
		if(a[i]==s){
			return i+1;
		}
	}
	return -1;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		cout << check(n, k) << "\n";
	}
	return 0;
}
