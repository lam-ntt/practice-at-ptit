#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		
		int mid=n/2, cnt=0;
		int i=n-1, j=mid-1;
		while(i>=mid&&j>=0){
			if(a[i]>=2*a[j]){
				++cnt;
				--i; --j;
			}else{
				--j;
			}
		}
		cout << n-cnt << "\n";
	}
	return 0;
}
