#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n, k; string s;

int find(ll level, ll pos){
	if(level==0) return pos-1;
	ll num=s.size()*pow(2, level-1);
	if(pos<=num) return find(level-1, pos);
	else if(pos==num+1) return find(level-1, num);
	else return find(level-1, pos-num-1);
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> s >> n;
		k=0;
		while(n>s.size()*pow(2, k)){
			++k;
		}
		cout << s[find(k, n)] << "\n";
	}
	return 0;
}
