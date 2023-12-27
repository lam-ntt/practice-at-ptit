#include<bits/stdc++.h>
using namespace std;

int check(string s){
	int n=0;
	for(int  i=0; i<s.size(); i++){
		if(i%2==0){
			n+=s[i]-'0';
		}else{
			n-=s[i]-'0';
		}
	}
	if(abs(n)%11==0){
		return 1;
	}
	return 0;
	
}

int main(){
	int test; cin >> test;
	while(test--){
		string s; cin >> s;
		cout << check(s) << "\n";
	}
	return 0;
}
