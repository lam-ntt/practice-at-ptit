#include<bits/stdc++.h>
using namespace std;

int n, a[55];

bool check(){
	for(int i=0; i<n/2; i++){
		if(a[i]>a[n-1-i]){
			swap(a[i], a[n-1-i]);
		} 
	}
	
	for(int i=1; i<n; i++){
		if(a[i]<a[i-1]) return 0;
	}
	return 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		if(check()) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}
