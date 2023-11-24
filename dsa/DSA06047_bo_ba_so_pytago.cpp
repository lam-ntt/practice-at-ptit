#include<bits/stdc++.h>
using namespace std;

int n; 
long long tmp, a[5005];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> tmp;
			a[i]=pow(tmp, 2);
		}
		sort(a, a+n);
		
		int ok=0;
		for(int i=n-1; i>=2; i--){
			int l=0, r=i-1;
			while(l<r){
				long long sum=a[l]+a[r];
				if(sum==a[i]){
					cout << "YES\n";
					ok=1; break;
				}
				if(sum<a[i]) ++l;
				else --r;
			}
			if(ok) break;
		}
		if(!ok) cout << "NO\n";
	}
	return 0;
}
