#include<bits/stdc++.h>
using namespace std;

int arr[1000005];

int main(){
	int test; cin >> test;
	while(test--){
		int n, k; cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> arr[i];
			if(i>=k){
				cout << arr[i] << " ";
			}
		}
		
		for(int i=0; i<k; i++){
			cout << arr[i] << " ";
		}
		
		cout << "\n";
	}
	return 0;
}
