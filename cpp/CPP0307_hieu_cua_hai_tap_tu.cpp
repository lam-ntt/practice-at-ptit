#include<bits/stdc++.h>
using namespace std;

void check(string s1, string s2){
	set<string> st2;
	string tmp;
	stringstream ss(s2);
	while(ss>>tmp){
		st2.insert(tmp);
	}
	
	set<string> st1;
	stringstream sss(s1);
	while(sss>>tmp){
		if(st2.count(tmp)==0){
			st1.insert(tmp);
		}
	}
	
	for(auto it: st1){
		cout << it << " ";
	}
	cout << "\n";
}

int main(){
	int test; cin >> test;
	cin.ignore();
	while(test--){
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		check(s1, s2);
	}
	return 0;
}
