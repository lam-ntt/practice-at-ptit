#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0; i<n; i++) cin >> a[i];
		
		int l[n]={0}, r[n]={0};
		stack<int> stl, str;
		for(int i=0; i<n; i++){
			while(!stl.empty()&&a[stl.top()]>=a[i]) stl.pop();
			if(stl.empty()) l[i]=i+1;
			else l[i]=i-stl.top();
			stl.push(i);
		}
		for(int i=n-1; i>=0; i--){
			while(!str.empty()&&a[str.top()]>=a[i]) str.pop();
			if(str.empty()) r[i]=n-i;
			else r[i]=str.top()-i;
			str.push(i);
		}
		
		int mx=0;
		for(int i=0; i<n; i++){
			if(a[i]<=l[i]+r[i]-1) mx=max(mx, a[i]);
		}
		cout << mx << "\n";
	}
	return 0;
}
