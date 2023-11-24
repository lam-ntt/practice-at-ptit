#include<bits/stdc++.h>
using namespace std;

int n, k, a[15], A[15], ok;

void readAndInit(){
	cin >> n >> k;
	for(int i=1; i<=n; i++){
		cin >> A[i];
	}
	sort(A+1, A+n+1);
	ok=0;
}

void print(){
	vector<int> v;
	for(int i=1; i<=n; i++){
		if(a[i]) v.push_back(A[i]);
	}
	
	cout << "[";
	for(int i=0; i<v.size()-1; i++){
		cout << v[i] << " ";
	}
	cout << v[v.size()-1] << "] ";
	ok=1;
}

void tryy(int i){
	for(int j=1; j>=0; j--){
		a[i]=j;
		k-=a[i]*A[i];
		if(i==n&&k==0) print();
		else if(i<n&&k>=0) tryy(i+1);
		k+=a[i]*A[i];
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		readAndInit();
		tryy(1);
		if(!ok) cout << "-1";
		cout << "\n";
	}
	return 0;
}
