#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, m, a[505][505];

ll check(int i){
	int l[505]={0}, r[505]={0};
	stack<int> st;
	for(int j=0; j<m; j++){
		while(!st.empty()&&a[i][st.top()]>=a[i][j]) st.pop();
		if(st.empty()) l[j]=j+1;
		else l[j]=j-st.top();
		st.push(j);
	}
	
	while(!st.empty()) st.pop();
	for(int j=m-1; j>=0; j--){
		while(!st.empty()&&a[i][st.top()]>=a[i][j]) st.pop();
		if(st.empty()) r[j]=m-j;
		else r[j]=st.top()-j;
		st.push(j);
	}
	
	ll mx=-1;
	for(int j=0; j<=n; j++) mx=max(mx, (ll)a[i][j]*(l[j]+r[j]-1));
	return mx;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++) cin >> a[i][j];
		}
		
		for(int i=1; i<n; i++){
			for(int j=0; j<m; j++){
				if(a[i][j]) a[i][j]+=a[i-1][j];
			}
		}
	
		ll mx=-1;
		for(int i=0; i<n; i++) mx=max(mx, check(i));
		cout << mx << "\n";
	}
	return 0;
}
