#include<bits/stdc++.h>
using namespace std;

int a[1000005], b[1000005];

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=0;  i<n; i++){
			cin >> a[i];
			b[i]=a[i];
		}
		sort(b, b+n);
		
		for(int i=0; i<n; i++){
			auto it=upper_bound(b, b+n, a[i]);
			if(it!=b+n){
				cout << *it << " ";
			}else{
				cout << "_ ";
			}
		}
		cout << "\n";
	}
	return 0;
}
