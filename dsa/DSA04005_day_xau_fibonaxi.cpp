#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll F[100];

void init(){
	F[0]=0; F[1]=1;
	for(int i=2; i<=92; i++){
		F[i]=F[i-1]+F[i-2];
	}
}

ll n, k;

char solve(ll G, ll pos){
	if(G==1) return 'A';
	if(G==2) return 'B';
	
	if(pos<=F[G-2]) return solve(G-2, pos);
	else return solve(G-1, pos-F[G-2]);
}

int main(){
	init();
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		cout << solve(n, k) << "\n";
	}
	return 0;
}
