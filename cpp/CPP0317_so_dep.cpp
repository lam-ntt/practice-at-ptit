#include<bits/stdc++.h>
using namespace std;

int check(string s){
	for(int i=0; i<=s.size()/2; i++){
		if(s[i]!=s[s.size()-1-i]){
			return 0;
		}
		if(s[i]%2==1){
			return 0;
		}
	}
	return 1;
}

int main(){
	int test; cin >> test;
	cin.ignore();
	while(test--){
		string s; getline(cin, s);
		if(check(s)){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}
