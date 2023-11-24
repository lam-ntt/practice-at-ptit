#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m; 
	cin >> n >> m;
	string s1, s2;
	
	s1=to_string(n);
	s2=to_string(m);
	for(int i=0; i<=s1.size(); i++){
		if(s1[i]=='6') s1[i]='5';
	}
	for(int i=0; i<=s2.size(); i++){
		if(s2[i]=='6') s2[i]='5';
	}
	cout << stoi(s1)+stoi(s2) << " ";
	
	s1=to_string(n);
	s2=to_string(m);
	for(int i=0; i<=s1.size(); i++){
		if(s1[i]=='5') s1[i]='6';
	}
	for(int i=0; i<=s2.size(); i++){
		if(s2[i]=='5') s2[i]='6';
	}
	cout << stoi(s1)+stoi(s2);
	return 0;
}
