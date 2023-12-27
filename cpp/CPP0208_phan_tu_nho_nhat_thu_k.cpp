#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n, k; cin >> n >> k;
		int arr[100005];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		sort(arr, arr+n);
		cout << arr[k-1] << "\n";
	}
	return 0;
}
