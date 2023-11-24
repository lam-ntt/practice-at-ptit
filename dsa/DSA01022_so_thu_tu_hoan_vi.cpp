#include<bits/stdc++.h>
using namespace std;

int n, cnt, a[15], A[15];

void readAndInit(){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> A[i];
	}
	
	for(int i=1; i<=n; i++){
		a[i]=i;
	}
	cnt=1;
}

bool check(){
	for(int i=1; i<=n; i++){
		if(a[i]!=A[i]) return 0;
	}
	cout << cnt << "\n";
	return 1;
}

void solve(){
	while(1){
		if(check()) return;
		++cnt;
		int i=n;
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
		solve();
	}
	return 0;
}
