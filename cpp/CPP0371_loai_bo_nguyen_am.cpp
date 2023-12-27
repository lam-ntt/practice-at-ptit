#include<bits/stdc++.h>
using namespace std;

void check(string s){
	for(int i=0; i<s.size(); i++){
		s[i]=tolower(s[i]);
	}
	
	for(int i=0; i<s.size(); i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
			s.erase(i, 1);
			--i;
		}
	}
	
	for(int i=0; i<s.size(); i++){
		cout << "." << s[i];
	}
}

int main(){
	string s; getline(cin, s);
	check(s);
	return 0;
}
