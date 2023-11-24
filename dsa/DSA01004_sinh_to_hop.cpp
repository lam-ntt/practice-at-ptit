#include<bits/stdc++.h>
using namespace std;

int n, k, a[20];

void readAndInit(){
	cin >> n >> k;
	for(int i=1; i<=k; i++){
		a[i]=i;
	}
}

void print(){
	for(int i=1; i<=k; i++){
		cout << a[i];
	}
	cout << " ";
}

void gen(){
	while(1){
		print();
		int i=k;
		while(i>=1&&a[i]==n-k+i){
			i--;
		}
		if(i==0) return;
		else{
			++a[i];
			for(int j=i+1; j<=k; j++){
				a[j]=a[j-1]+1;
			}
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
