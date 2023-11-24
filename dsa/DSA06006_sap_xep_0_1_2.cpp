#include<bits/stdc++.h>
using namespace std;

int n, a[1000005];

int main(){
	int t; cin >> t;
	while(t--){
		int cnt[3]={0};
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
			++cnt[a[i]];
		}

		for(int i=0; i<=2; i++){
			while(cnt[i]--){
				cout << i << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
