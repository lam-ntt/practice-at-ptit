#include<bits/stdc++.h>
using namespace std;

int check(int n){
	if(n<2){
		return 0;
	}
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int test; cin >> test;
	while(test--){
		int l, r; cin >> l >> r;
		
		int cnt=0;
		for(int i=l; i<=r; i++){
			if(check(i)){
				++cnt;
			}
		}
		
		cout << cnt << "\n";
	}
	return 0;
}
