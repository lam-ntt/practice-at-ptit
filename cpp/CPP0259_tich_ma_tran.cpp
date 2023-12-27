#include<bits/stdc++.h>
using namespace std;

int s(int a[55][55], int b[55][55], int i, int j, int m){
	int sum=0;
	for(int e=0; e<m; e++){
		sum+=a[i][e]*b[e][j];
	}
	return sum;
}

int main(){
	int n, m, p; cin >> n >> m >> p;
	int a[55][55], b[55][55];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<p; j++){
			cin >> b[i][j];
		}
	}
		
	for(int i=0; i<n; i++){
		for(int j=0; j<p; j++){
			cout << s(a, b, i, j, m) << " ";
		}
		cout << "\n";
	}
	return 0;
}
