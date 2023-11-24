#include<bits/stdc++.h>
using namespace std;

int n, k, a[45];

void read(){
	cin >> n >> k;
	for(int i=1; i<=k; i++){
		cin >> a[i];
	}
}

void check(){
	set<int> st;
	for(int i=1; i<=n; i++){
		st.insert(a[i]);
	}
	
	int i=k, cnt=0;
	while(i>=1&&a[i]==n-k+i){
		--i;
	}
	if(i!=0){
		++a[i];
		for(int j=i+1; j<=k; j++){
			a[j]=a[j-1]+1;
		}
		
		for(int i=1; i<=k; i++){
			if(st.count(a[i])!=0) ++cnt;
		}
	}
	cout << k-cnt << "\n";
}

int main(){
	int t; cin >> t;
	while(t--){
		read();
		check();
	}
	return 0;
}
