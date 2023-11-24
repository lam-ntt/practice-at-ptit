#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n, k, a[100005], mx[100005];

int binarySearch(int l, int r, ll value){
	if(l>r) return -1;
	int m=(l+r)/2;
	if(mx[m]==value) return m;
	else if(mx[m]<value) return binarySearch(m+1, r, value);
	return binarySearch(l, m-1, value);
}

int check(){
	if(binarySearch(0, n-1, k)!=-1) return 1;
	for(int i=0; i<n-1; i++){
		int tmp=binarySearch(i+1, n-1, mx[i]+k);
		if(tmp!=-1) return 1;
	}
	return 0;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >>k ;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		mx[0]=a[0];
		for(int i=1; i<n; i++){
			mx[i]=mx[i-1]+a[i];
		}
		
		if(check()) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
