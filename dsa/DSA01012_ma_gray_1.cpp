#include<bits/stdc++.h>
using namespace std;

int n;
vector<string> v;

void readAndInit(){
	cin >> n;
	string s="";
	for(int i=1; i<=n; i++){
		s+="0";
	}
	v.clear();
	v.push_back(s);
}

void print(){
	for(auto it: v){
		cout << it << " ";
	}
	cout << "\n";
}

void gen(){
	for(int i=1; i<=n; i++){
		for(int j=pow(2, i-1)-1; j>=0; j--){
			string s=v[j];
			s[n-i]='1';
			v.push_back(s);
		}
	}
	print();
}

int main(){
	int t; cin >> t;
	while(t--){
		readAndInit();
		gen();
	}
}
