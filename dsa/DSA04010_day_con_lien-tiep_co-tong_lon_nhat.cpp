#include<bits/stdc++.h>
using namespace std;

int n, a[105];

int mxL(int fi, int la){
	int mx=-1, tmp=0;
	for(int i=la; i>=fi; i--){
		tmp+=a[i];
		mx=max(mx, tmp);
	}
	return mx;
}

int mxR(int fi, int la){
	int mx=-1, tmp=0;
	for(int i=fi; i<=la; i++){
		tmp+=a[i];
		mx=max(mx, tmp);
	}
	return mx;
}

int solve(int first, int last){
	if(first==last) return first;
	
	int mid=(first+last)/2;
	int maxL=solve(first, mid);
	int maxR=solve(mid+1, last);
	int maxLR=mxL(first, mid)+mxR(mid+1, last);
	
	int res=max(maxL, maxR);
	res=max(res, maxLR);
	return res;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		cout << solve(0, n-1) << "\n";
	}
	return 0;
}
