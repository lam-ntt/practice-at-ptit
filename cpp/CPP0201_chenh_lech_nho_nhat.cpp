#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int arr[100005];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		sort(arr, arr+n);
		int min=1000000000;
		for(int i=0; i<n-1; i++){
			if(abs(arr[i+1]-arr[i])<min){
				min=abs(arr[i+1]-arr[i]);
			}
		}
		
		cout << min << "\n";
	}
	return 0;
}
