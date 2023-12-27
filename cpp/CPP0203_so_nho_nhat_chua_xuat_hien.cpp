#include<bits/stdc++.h>
using namespace std;

int arr[1000005];

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		sort(arr, arr+n);
		int temp=1;
		for(int i=0; i<n; i++){
			if(arr[i]==temp){
				++temp;
			}
		}
		
		cout << temp << "\n";
	}
	return 0;
}
