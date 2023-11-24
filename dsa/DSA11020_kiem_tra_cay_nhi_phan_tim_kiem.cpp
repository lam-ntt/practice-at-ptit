#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n]={-1}, ok=1;
		for(int i=1; i<=n; i++){
			cin >> a[i];
			if(a[i]<=a[i-1]) ok=0;
		}
		cout << ok << "\n";
	}
	return 0;
}
