#include<bits/stdc++.h>
using namespace std;

int check(string s){
	if(s[s.size()-1]=='\n'){
		return 1;
	}
	return 0;	
}

int main(){
	string s;
	vector<string> v;
	while(cin >> s){
		for(int i=0; i<s.size(); i++){
			s[i]=tolower(s[i]);
		}
		for(int i=0; i<s.size(); i++){
			if(s[i]=='.'||s[i]=='?'||s[i]=='!'){
				s[i]='\n';
			}
		}
		v.push_back(s);
	}
		
	for(int i=0; i<v.size(); i++){
		if(i==0||check(v[i-1])){
			v[i][0]-=32;
		}
		cout << v[i];
		if(!check(v[i])){
			cout << " ";
		}
	}
	return 0;
}
