#include<bits/stdc++.h>
using namespace std;

void change(int a[105][105], int b[12][12], int m, int r, int c){
	for(int i=r*m; i<r*m+m; i++){
		for(int j=c*m; j<c*m+m; j++){
			a[i][j]=a[i][j]*b[i-r*m][j-c*m];
		}
	}
}

int main(){
	int n, m, a[105][105], b[12][12];
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	cin >> m;
	for(int i=0; i<m; i++){
		for(int j=0; j<m; j++){
			cin >> b[i][j];
		}
	}
	
	int s=n/m;
	for(int i=0; i<s; i++){
		for(int j=0; j<s; j++){
			change(a, b, m, i, j);
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
