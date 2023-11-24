#include<bits/stdc++.h>
using namespace std;

int n, k; string s; 
vector<string> v;

void readAndInit(){
	cin >> n >> k;
	s="";
	for(int i=0; i<n; i++){
		s+="A";
	}
}

void check(){
	int tmp=0, temp=0;
	for(int i=0; i<n; i++){
		if(s[i]=='A') tmp++;
		else tmp=0;
		if(tmp>=k) ++temp;
	}

	if(temp!=1) return;
	else v.push_back(s);
}

void gen(){
	while(1){
		check();
		int i=s.size()-1;
		while(i>=0&&s[i]=='B'){
			s[i]='A';
			--i;
		}
		if(i==-1){
			cout << v.size() << "\n";
			for(auto it: v){
				cout << it << "\n";
			}
			return;
		}else s[i]='B';
	}
}

int main(){
	readAndInit();
	gen();
	return 0;
}
