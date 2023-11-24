#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll convert(string s){
	ll d=0;
	int len=s.size();
	for(int i=0; i<len; i++){
		d+=(s[i]-'0')*pow(2, len-1-i);
	}
	return d;
}

int main(){
	int t; cin >> t;
	while(t--){
		string a, b; cin >> a >> b;
		ll n=convert(a), m=convert(b);
		cout << n*m << "\n";
	}
	return 0;
}
