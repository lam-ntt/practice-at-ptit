#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll chia_du(string s, ll m){
	ll tmp=0;
	for(int i=0; i<s.size(); i++){
		tmp=tmp*10+s[i]-'0';
		tmp%=m;
	}
	return tmp;
}

ll check(ll a, ll b, ll m){
	if(b==0){
		return 1;
	}
	ll tmp=check(a, floor(b/2), m);
	if(b%2==1){
		return ((tmp*tmp)%m)*a%m;
	}else{
		return (tmp*tmp)%m;
	}
}

int main(){
	int test; cin >> test;
	while(test--){
		string s; 
		ll a, b, m;
		cin >> s >> b >> m;
		
		a=chia_du(s, m);
		cout << check(a, b, m) << "\n";
	}
	return 0;
}
