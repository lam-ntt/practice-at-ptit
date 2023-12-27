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
				if(i==0||j==0||i==n-1||j==n-1){
					cout << arr[i][j] << " ";
				}else{
					cout << "  ";
				}
			}
			cout << "\n";
		}	
	}
	return 0;
}
