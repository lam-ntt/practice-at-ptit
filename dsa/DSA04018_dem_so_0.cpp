#include<bits/stdc++.h>
using namespace std;

int n, a[1005];

int find(int l, int r){
	if(l>r) return -1;
	int m=(l+r)/2;
	if(a[m]==0) return max(m, find(m+1, r));
	else return find(l, m-1);
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++) cin >> a[i];
		
		int tmp=find(0, n-1);
		if(tmp==-1) cout << "0\n";
		else cout << tmp+1 << "\n";
	}
	return 0;
}
