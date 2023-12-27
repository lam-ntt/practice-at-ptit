#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		int arr[100005], max=-1;
		for(int i=0; i<n; i++){
			cin >> arr[i];
			if(max<arr[i]){
				max=arr[i];
			}
		}
		
		cout << max << "\n";
	}
	return 0;
}
