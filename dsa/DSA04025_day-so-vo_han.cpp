#include<bits/stdc++.h>
#define ll long long
#define mod (ll)(1e9+7)
using namespace std;

ll k, a[5][5], res[5][5], tmp[5][5];

void multi(ll m[5][5], ll q[5][5]){
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			tmp[i][j]=0;
			for(int k=0; k<2; k++){
				tmp[i][j]+=m[i][k]*q[k][j];
				tmp[i][j]%=mod;
			}
		}
	}
}

void copy(ll m[5][5]){
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			m[i][j]=tmp[i][j];
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> k;
		for(int i=0; i<2; i++){
			for(int j=0; j<2; j++){
				a[i][j]=!(i&&j);
				if(i==j) res[i][j]=1;
				else res[i][j]=0;
			}
		}
		
		if(k==1||k==2){
			cout << "1\n";
			continue;
		}else k--;
		
		while(k>0){
			if(k%2==1){
				multi(res, a);
				copy(res);
			}
			multi(a, a);
			copy(a);
			k/=2;
		}
		cout << res[0][0] << "\n";
	}
	return 0;
}
