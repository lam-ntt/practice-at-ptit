#include<bits/stdc++.h>
using namespace std;

int a[1000005], b[1000005];

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
			b[i]=a[i];
		}
		
		sort(b, b+n);
		int l=-1, r=-1;
		for(int i=0; i<n; i++){
			if(a[i]!=b[i]){
				l=i; break;
			}
		}
		for(int i=n-1; i>=0; i--){
			if(a[i]!=b[i]){
				r=i; break;
			}
		}
		
		if(l==-1){
			cout << "-1 -1 \n";
		}else{
			cout << l+1 << " " << r+1 << "\n";
		}
	}
	return 0;
}
