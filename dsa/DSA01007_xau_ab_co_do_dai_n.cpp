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

void gen(){
	while(1){
		cout << s << " ";
		int i=s.size()-1;
		while(i>=0&&s[i]=='B'){
			s[i]='A';
			--i;
		}
		if(i==-1) return;
		else s[i]='B';
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		readAndInit();
		gen();
		cout << "\n";
	}
	return 0;
}
