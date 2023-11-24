#include<bits/stdc++.h>
using namespace std;

int n, k, a[20];

void readAndInit(){
	cin >> n >> k;
	for(int i=1; i<=n; i++){
		a[i]=0;
	}
}

void check(){
	int cnt=0;
	for(int i=1; i<=n; i++){
		if(a[i]) ++cnt;
	}
	
	if(cnt!=k) return;
	for(int i=1; i<=n; i++){
		cout << a[i];
	}
	cout << "\n";
}

void gen(){
	while(1){
		check();
		int i=n;
		while(i>=1&&a[i]==1){
			a[i]=0;
			--i;
		}
		if(i==0) return;
		else a[i]=1;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		readAndInit();
		gen();
	}
	return 0;
}
