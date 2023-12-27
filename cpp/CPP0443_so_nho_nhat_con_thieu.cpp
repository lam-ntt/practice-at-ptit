#include<bits/stdc++.h>
using namespace std;

int a[10000005];

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n; n-=1;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		
		int tmp=1;
		for(int i=0; i<n; i++){
			if(a[i]==tmp){
				++tmp;
			}
		}
		cout <<tmp << "\n";
	}
	return 0;
}
