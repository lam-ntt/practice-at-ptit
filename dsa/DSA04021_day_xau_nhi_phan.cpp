#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll F[100];

void init(){
	F[0]=0; F[1]=1;
	for(int i=2; i<93; i++){
		F[i]=F[i-1]+F[i-2];
	}
}

ll n, k;

int solve(ll step, ll pos){
	if(step==1) return 0;
	if(step==2) return 1;
	
	if(pos<=F[step-2]) return solve(step-2, pos);
	else return solve(step-1, pos-F[step-2]);
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
