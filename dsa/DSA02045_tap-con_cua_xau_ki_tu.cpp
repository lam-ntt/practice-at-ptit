#include<bits/stdc++.h>
using namespace std;

int n, a[20]; string s;
set<string> st;

void save(){
	string tmp="";
	for(int i=1; i<=n; i++){
		if(a[i]) tmp+=s[i-1];
	}
	if(tmp!="") st.insert(tmp);
}

void tryy(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n) save();
		else tryy(i+1);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> s;
		st.clear();
		tryy(1);
		
		for(auto it: st){
			cout << it << " ";
		}
		cout << "\n";
	}
}
