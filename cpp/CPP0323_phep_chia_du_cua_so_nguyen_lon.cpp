#include<bits/stdc++.h>
using namespace std;

long long check(string s, long long n){
	long long tmp=0;
	for(int i=0; i<s.size(); i++){
		tmp=tmp*10+s[i]-'0';
		tmp%=n;
	}
	return tmp;
}

int main(){
	int test; cin >> test;
	while(test--){
		string s; long long n;
		cin >> s >> n;
		cout << check(s, n) << "\n";
	}
	return 0;
}
