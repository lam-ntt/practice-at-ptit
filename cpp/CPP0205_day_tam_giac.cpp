#include<bits/stdc++.h>
using namespace std;

int arr[10000007];

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		int max=-1;
		for(int i=0; i<n; i++){
			if(arr[i]>max){
				max=arr[i];
			}
		}
		
		cout << max << "\n";
		
	}
	return 0;
}
