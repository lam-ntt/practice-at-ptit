#include<bits/stdc++.h>
using namespace std;

int n, a[25];

void readAndInit(){
	cin >> n;
	for(int i=1; i<=n; i++){
		a[i]=0;
	}
}

void check(){
	for(int i=1; i<=n/2; i++){
		if(a[i]!=a[n-i+1]) return;
	}
	
	for(int i=1; i<=n; i++){
		cout << a[i] << " ";
	}
	cout << "\n";
}

void gen(){
	while(1){
		check();
		int i=n;
		while(i>=1&&a[i]==1){
			a[i]=0;
			i--;
		}
		if(i==0) return;
		else a[i]=1;
	}
}

int main(){
	readAndInit();
	gen();
	return 0;
}
