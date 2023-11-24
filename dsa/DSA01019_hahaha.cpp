#include<bits/stdc++.h>
using namespace std;

int n; string s;

void readAndInit(){
	cin >> n;
	s="";
	for(int i=1; i<=n; i++){
		s+="A";
	}
}

void check(){
	if(s[0]!='H'||s[n-1]!='A') return;
	for(int i=0; i<s.size()-1; i++){
		if(s[i]=='H'&&s[i+1]=='H') return;
	}
	cout << s << "\n";
}

void gen(){
	while(1){
		check();
		int i=s.size()-1;
		while(i>=0&&s[i]=='H'){
			s[i]='A';
			--i;
		}
		if(i==-1) return;
		else s[i]='H';
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		readAndInit();
		gen();
	}
	return 0;
}
