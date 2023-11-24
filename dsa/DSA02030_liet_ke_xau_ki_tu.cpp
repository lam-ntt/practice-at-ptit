#include<bits/stdc++.h>
using namespace std;

int n, k, a[15];

void readAndInit(){
	char t; cin >> t;
	n=t-'A'+1;
	cin >> k;
	a[0]=1;
}

void print(){
	for(int i=1; i<=k; i++){
		cout << (char)('A'+a[i]-1);
	}
	cout << "\n";
}

void tryy(int i){
	for(int j=a[i-1]; j<=n; j++){
		a[i]=j;
		if(i==k) print();
		else tryy(i+1);
	}
}

int main(){
	readAndInit();
	tryy(1);
}
