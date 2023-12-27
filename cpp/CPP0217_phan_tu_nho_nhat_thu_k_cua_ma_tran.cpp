#include<bits/stdc++.h>
using namespace std;

	int arr[10005];

int main(){
	int test; cin >> test;
	while(test--){
		int n, k; cin >> n >> k;
		for(int i=0; i<n*n; i++){
			cin >> arr[i];
		}
		
		sort(arr, arr+n*n);
		cout << arr[k-1] << "\n";
		
	}
	return 0;
}
