#include<bits/stdc++.h>
using namespace std;

int n, k , a[1005];

void read(){
	cin >> n >> k;
	for(int i=1; i<=k; i++){
		cin >> a[i];
	}
}

void gen(){
	int i=k;
	while(i>=2&&a[i]==a[i-1]+1){
		--i;
	}
	if(i==1&&a[i]==i){
		for(int j=1; j<=k; j++){
			cout << n-k+j << " ";
		}
	}else{
		--a[i];
		for(int j=i+1; j<=k; j++){
			a[j]=n-k+j;
		}
		for(int j=1; j<=k; j++){
			cout << a[j] << " ";
		}
	}
	cout << "\n";
}

int main(){
	int t; cin >> t;
	while(t--){
		read();
		gen();
	}
	return 0;
}
