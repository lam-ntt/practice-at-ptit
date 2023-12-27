#include<bits/stdc++.h>
using namespace std;

void check(string s1, string s2){
	string m=s1, n=s2;
	for(int i=0; i<m.size(); i++){
		if(m[i]=='6'){
			m[i]-=1;
		}
	}
	for(int i=0; i<n.size(); i++){
		if(n[i]=='6'){
			n[i]-=1;
		}
	}
	cout << stoll(n)+stoll(m) << " ";
	
	m=s1, n=s2;
	for(int i=0; i<m.size(); i++){
		if(m[i]=='5'){
			m[i]+=1;
		}
	}
	for(int i=0; i<n.size(); i++){
		if(n[i]=='5'){
			n[i]+=1;
		}
	}
	cout << stoll(n)+stoll(m) << "\n";
}

int main(){
	int test; cin >> test;
	while(test--){
		string s1, s2;
		cin >> s1 >> s2;
		check(s1, s2);
	}
	return 0;
}
