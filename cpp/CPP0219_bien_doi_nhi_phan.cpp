#include<bits/stdc++.h>
using namespace std;

void change(int arr[105][105], int r, int c, int n, int m){
	for(int i=0; i<m; i++){
		arr[r][i]=1;
	}
	for(int i=0; i<n; i++){
		arr[i][c]=1;
	}
}

int arr[105][105], mark[105][105];

int main(){
	int test;
	cin >> test;
	while(test--){
		int r, c; cin >> r >> c;
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				cin >> arr[i][j];
				mark[i][j]=arr[i][j];
			}
		}
		
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				if(mark[i][j]==1){
					change(arr, i, j, r, c);
				}
			}
		}
		
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
