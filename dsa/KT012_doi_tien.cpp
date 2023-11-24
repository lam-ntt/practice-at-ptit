#include<bits/stdc++.h>
using namespace std;

int n, s, A[35];
int ok, k, a[35];

void tryy(int i){
	for(int j=a[i-1]+1; j<=n-k+i; j++){
		a[i]=j;
		s-=A[j];
		if(s==0){
			 ok=1; return;
		}
		else if(s>0&&i<k) tryy(i+1);
		s+=A[j];
	}
}

int main(){
	cin >> n >> s;
	for(int i=1; i<=n; i++){
		cin >> A[i];
	}
	
	ok=0; k=1;
	while(!ok&&k<=n){
		tryy(1);
		if(ok) cout << k;
		++k;
	}
	if(!ok) cout << "-1";
	return 0;
}
