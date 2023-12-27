#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int arr[1005];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		int cnt=0, l=0, r=n-1;
		while(l<r){
			if(arr[l]==arr[r]){
				++l; --r;
			}else if(arr[l]<arr[r]){
				++l; arr[l]+=arr[l-1]; ++cnt;
			}else{
				--r; arr[r]+=arr[r+1]; ++cnt;
			}
		}
		
		cout << cnt << "\n";
	}
	return 0;
}
