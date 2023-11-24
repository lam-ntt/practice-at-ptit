#include<bits/stdc++.h>
#define ll long long
using namespace std;

string s; 
int a[20]; ll mx;
map<ll, int> mp;

void init(){
	for(int i=0; i<=100000; i++){
		mp[pow(i, 3)]=1;
	}
}

void check(){
	ll n=0;
	for(int i=0; i<s.size(); i++){
		if(a[i]) n=n*10+(s[i]-'0');
	}
	
	if(n<=mx) return;	
	if(mp[n]) mx=n;
	else{
		int m=cbrt(n);
		if(pow(m, 3)==n||pow(m+1, 3)==n) mx=n;
	}
}

void tryy(int i){
	for(int j=1; j>=0; j--){
		a[i]=j;
		if(i==s.size()) check();
		else tryy(i+1);
	}
}

int main(){
	init();
	int t; cin >> t;
	while(t--){
		cin >> s;
		mx=-1;
		tryy(0);
		if(mx!=0) cout << mx << "\n";
		else cout << "-1\n";
	}
}
