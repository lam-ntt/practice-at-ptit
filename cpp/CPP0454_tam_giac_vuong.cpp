#include<bits/stdc++.h>
using namespace std;

int check(long long a[], int n){
	for(int i=n-1; i>=2; i--){
		int l=0, r=i-1;
		while(l<r){
			if(a[l]+a[r]<a[i]){
				++l;
			}else if(a[l]+a[r]>a[i]){
				--r;
			}else{
				return 1;
			}
		}
	}
	return 0;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long a[5005];
		for(int i=0; i<n; i++){
			cin >> a[i];
			a[i]*=a[i];
		}
		sort(a, a+n);
		if(check(a, n)){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}
