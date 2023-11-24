#include<bits/stdc++.h>
using namespace std;

int n, k, a[1000005];

int binarySearch(int l, int r){
	if(l>r) return -1;
	int m=(l+r)/2;
	if(a[m]==k) 
		return 1;
	else if(a[m]>k) 
		return binarySearch(l, m-1);
	else 
		return binarySearch(m+1, r);
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		cout << binarySearch(0, n-1) << "\n";
	}
	return 0;
}
