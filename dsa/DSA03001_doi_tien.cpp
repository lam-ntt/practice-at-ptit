#include<bits/stdc++.h>
using namespace std;

int value[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cnt=0, idx=9;
		while(n>0){
			cnt+=n/value[idx];
			n%=value[idx];
			--idx;
		}
		cout << cnt << "\n";
	}
	return 0;
}
