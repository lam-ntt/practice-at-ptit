#include<bits/stdc++.h>
using namespace std;

int n, a[1005];

void read(){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
}

void gen(){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		--i;
	}
	if(i==0){
		for(int i=1; i<=n; i++){
			cout << i << " ";
		}
	}else{
		int pos=n;
		while(a[pos]<a[i]){
			--pos;
		}
		swap(a[i], a[pos]);
		sort(a+i+1, a+n+1);
		for(int i=1; i<=n; i++){
			cout << a[i] << " ";
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
