#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a[405][405], b[405][405];

ll cal(int i, int j, int k){
	return (a[i+k-1][j+k-1]-a[i-1][j-1])-(b[i+k-1][j]-b[i-1][j+k]);
}

int main(){
	int n; cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> a[i][j];
			b[i][j]=a[i][j];
		}
	}
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			a[i][j]+=a[i-1][j-1];
			b[i][j]+=b[i-1][j+1];
		}
	}
	
	ll max_value=0;
	for(int i=1; i<n; i++){
		for(int j=1; j<=n; j++){
			for(int k=2; k+max(i, j)-1<=n; k++){
				max_value=max(max_value, cal(i, j, k));
			}
		}
	}
	cout << max_value << "\n";
	return 0;
}
