#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n]; 
		for(int i=0; i<n; i++) cin >> a[i];
		
		int l[n]={0}, r[n]={0}; 
		stack<int> st, st2;
		for(int i=0; i<n; i++){
			while(!st.empty()&&a[st.top()]>=a[i]) st.pop();
			if(st.empty()) l[i]=i+1;
			else l[i]=i-st.top();
			st.push(i);
		}
		for(int i=n-1; i>=0; i--){
			while(!st2.empty()&&a[st2.top()]>=a[i]) st2.pop();
			if(st2.empty()) r[i]=n-i;
			else r[i]=st2.top()-i;
			st2.push(i);
		}
		
		ll mx=-1;
		for(int i=0; i<n; i++){
			mx=max(mx, a[i]*(r[i]+l[i]-1));
		}
		cout << mx << "\n";		
	}
	return 0;
}
