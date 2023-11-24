#include<bits/stdc++.h>
using namespace std;

int n, a[15];

void readAndInit(){
	cin >> n;
	for(int i=1; i<=n; i++){
		a[i]=i;
	}
}

void print(){
	for(int i=1; i<=n; i++){
		cout << a[i];
	}
	cout << " ";
}

void gen(){
	while(1){
		print();
		int i=n-1;
		while(i>=1&&a[i]>a[i+1]){
			--i;
		}
		if(i==0) return;
		else{
			int pos=n;
			while(a[pos]<a[i]){
				--pos;
			}
			swap(a[i], a[pos]);
			sort(a+i+1, a+n+1);
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		readAndInit();
		gen();
		cout << "\n";
	}
	return 0;
}
