#include<bits/stdc++.h>
using namespace std;

int a[10000005];

int max(int a, int b){
	if(a>b){
		return a;
	}
	return b;
}

int main(){
	int test; cin >> test;
	while(test--){
		int n, k; cin >> n >> k;
		int cnt=0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(a[i]<=k){
				++cnt;
			}
		}
		
		int res=0; int tmp=0;
		for(int i=0; i<cnt; i++){
			if(a[i]<=k){
				++tmp;
			}
		}
		res=tmp;
		
		for(int i=cnt; i<n; i++){
			if(a[i]<=k){
				++tmp;
			}
			if(a[i-cnt]<=k){
				--tmp;
			}
			res=max(res, tmp);
		}
		
		cout << cnt-res << "\n";
	}
	return 0;
}
