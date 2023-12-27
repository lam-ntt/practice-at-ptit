#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n, m; cin >> n >> m;
		int arr[105][105];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> arr[i][j];
			}
		}
		
		int right=m-1, left=0, top=0, bottom=n-1;
		while(1){
			for(int i=left; i<=right; i++){
				cout << arr[top][i] << " ";
			}
			++top;
			if(left>right||top>bottom){
				break;
			}
			
			for(int i=top; i<=bottom; i++){
				cout << arr[i][right] << " ";
			}
			--right;
			if(left>right||top>bottom){
				break;
			}
			
			for(int i=right; i>=left; i--){
				cout << arr[bottom][i] << " ";
			}
			--bottom;
			if(left>right||top>bottom){
				break;
			}
			
			for(int i=bottom; i>=top; i--){
				cout << arr[i][left] << " ";
			}
			++left;
			if(left>right||top>bottom){
				break;
			}
		}
		cout << "\n";
	}
	return 0;
}
