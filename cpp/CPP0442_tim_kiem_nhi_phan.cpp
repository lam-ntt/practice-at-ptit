#include<bits/stdc++.h>
using namespace std;

int a[1000005];

int check(int f, int l, int s){
	if(f>l){
		return -1;
	}
	if(s==a[(l+f)/2]){
		return 1;
	}else{
		if(s<a[(l+f)/2]){
			return check(f, (l+f)/2-1, s);
		}else{
			return check((l+f)/2+1, l, s);
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		cout << check(0, n-1, k) << "\n";
	}
	return 0;
}
