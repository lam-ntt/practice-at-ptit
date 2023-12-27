#include<bits/stdc++.h>
using namespace std;

int arr[1000005];

int count(int arr[], int s, int n){
	for(int i=0; i<n; i++){
		if(arr[i]==arr[s]&&i!=s){
			return 1;
		}
	}
	return 0;
}

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		int cnt=0;
		for(int i=0; i<n; i++){
			if(count(arr, i, n)){
				++cnt;
			}
		}
		
		cout << cnt << "\n";
	}
	return 0;
}
