#include<bits/stdc++.h>
#define ll long long
#define mod (ll)(1e9+7)
using namespace std;

ll n, k, a[15][15], res[15][15], tmp[15][15];

void multi(ll m[15][15], ll q[15][15]){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			tmp[i][j]=0;
			for(int k=0; k<n; k++){
				tmp[i][j]+=m[i][k]*q[k][j];
				tmp[i][j]%=mod;
			}
		}
	}
}

void copy(ll m[15][15]){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			m[i][j]=tmp[i][j];
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> a[i][j];
				if(i==j) res[i][j]=1;
				else res[i][j]=0;
			}
		}
		
		while(k>0){
			if(k%2==1){
				multi(res, a);
				copy(res);
			}
			multi(a, a);
			copy(a);
			k/=2;
		}
		
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout << res[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
