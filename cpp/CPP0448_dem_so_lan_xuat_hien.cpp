#include<bits/stdc++.h>
using namespace std;

int a[1005];

int check(int n, int k){
	int cnt=0;
	for(int i=0; i<n; i++){
		if(a[i]==k){
			++cnt;
		}
	}
	if(cnt==0){
		return -1;
	}else{
		return cnt;
	}
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
