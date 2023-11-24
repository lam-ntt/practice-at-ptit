#include<bits/stdc++.h>
using namespace std;

int n, k, cnt, a[20], A[20];

void readAndInit(){
	cin >> n >> k;
	for(int i=1; i<=k; i++){
		cin >> A[i];
	}
	
	for(int i=1; i<=k; i++){
		a[i]=i;
	}
	cnt=1;
}

bool check(){
	for(int i=1; i<=k; i++){
		if(a[i]!=A[i]) return 0;
	}
	cout << cnt << "\n";
	return 1;
}

void solve(){
	while(1){
		if(check()) return;
		++cnt;
		int i=k; 
		while(i>=1&&a[i]==n-k+i){
			--i;
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
		solve();
	}
	return 0;
}
