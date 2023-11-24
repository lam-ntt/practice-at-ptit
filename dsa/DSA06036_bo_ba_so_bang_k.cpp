#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n, int k){
	for(int i=0; i<n-2; i++){
		for(int j=i+1; j<n-1; j++){
			int pos1=lower_bound(a+j+1, a+n, k-a[i]-a[j])-a;
			int pos2=upper_bound(a+j+1, a+n, k-a[i]-a[j])-a;
			if(pos2>pos1) return 1;
		}
	}
	return 0;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		
		if(check(a, n, k)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
