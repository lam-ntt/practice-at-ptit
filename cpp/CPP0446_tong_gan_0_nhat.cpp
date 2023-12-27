#include<bits/stdc++.h>
using namespace std;

int a[1005];

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		int res=1e7, tmp;
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				tmp=a[i]+a[j];
				if(abs(res)>abs(tmp)){
					res=tmp;
				}
			}
		}
		cout << res << "\n";
	}
	return 0;
}
