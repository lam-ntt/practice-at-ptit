#include<bits/stdc++.h>
using namespace std;

int n, k, a[45];

void read(){
	cin >> n >> k;
	for(int i=1; i<=k; i++){
		cin >> a[i];
	}
}

void solve(){
	set<int> st;
	for(int i=1; i<=k; i++){
		st.insert(a[i]);
	}
	
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		--i;
	}
	if(i==0){
		cout << k << "\n";
	}else{
		++a[i];
		for(int j=i+1; j<=k; j++){
			a[j]=a[j-1]+1;
		}
		
		int cnt=0;
		for(int i=1; i<=k; i++){
			if(st.count(a[i])==0) ++cnt;
		}
		cout << cnt << "\n";
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		read();
		solve();
	}
	return 0;
}
