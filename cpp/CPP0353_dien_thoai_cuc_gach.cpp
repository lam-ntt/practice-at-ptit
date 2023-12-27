#include<bits/stdc++.h>
using namespace std;

int check(string s){
	for(int i=0; i<s.size()/2; i++){
		if(s[i]!=s[s.size()-1-i]){
			return 0;
		}
	}
	return 1;
}

void solve(string s){
	string tmp="";
	for(int i=0; i<s.size(); i++){
		s[i]=toupper(s[i]);
		if(s[i]>='W'){
			tmp+="9";
		}else if(s[i]>='T'){
			tmp+="8";
		}else if(s[i]>='P'){
			tmp+="7";
		}else if(s[i]>='M'){
			tmp+="6";
		}else if(s[i]>='J'){
			tmp+="5";
		}else if(s[i]>='G'){
			tmp+="4";
		}else if(s[i]>='D'){
			tmp+="3";
		}else{
			tmp+="2";
		}
	}
	
	if(check(tmp)) cout << "YES\n";
	else cout << "NO\n";
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		solve(s);
	}
	return 0;
}
