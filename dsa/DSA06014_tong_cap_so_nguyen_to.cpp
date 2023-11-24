#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;

int nt[MAX+5];

bool checkPrime(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

void initSieve(){
	for(int i=1; i<=MAX; i++){
		nt[i]=1;
	}
	nt[1]=0;
	
	for(int i=2; i<=sqrt(MAX); i++){
		if(checkPrime(i)){
			for(int j=2*i; j<=MAX; j+=i){
				nt[j]=0;
			}
		}
	}
}

int main(){
	initSieve();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ok=0;
		for(int i=2; i<=n/2; i++){
			if(nt[i]&&nt[n-i]){
				cout << i << " " << n-i <<"\n";
				ok=1; break;
			}
		}
		if(!ok) cout << "-1\n";
	}
	return 0;
}
