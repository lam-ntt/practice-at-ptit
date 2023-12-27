#include<bits/stdc++.h>
using namespace std;

int arr[105][105];

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> arr[i][j];
			}
		}
		
		for(int i=0; i<n; i++){
			if(i%2==0){
				for(int j=0; j<n; j++){
					cout << arr[i][j] << " ";
				}
			}else{
				for(int j=n-1; j>=0; j--){
					cout << arr[i][j] << " ";
				}
			}
		}
		cout << "\n";
	}
	return 0;
}
