#include<bits/stdc++.h>
using namespace std;

int arr[10000005];

int max(int arr[], int n){
	for(int i=n; i>=0; i--){
		for(int j=0; j<=n-i; j++){
			if(arr[j]<arr[j+i]){
				return i;
			}
		}
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		cout << max(arr, n) << "\n";
	}
	return 0;
}
