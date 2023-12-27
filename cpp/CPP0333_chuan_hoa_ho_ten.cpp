#include<bits/stdc++.h>
using namespace std;

void check(string s){
	for(int i=0; i<s.size(); i++){
		s[i]=tolower(s[i]);
	}
	
	vector<string> v;
	string tmp;
	stringstream ss(s);
	while(ss>>tmp){
		v.push_back(tmp);
	}
	
	for(int i=0; i<v.size()-1; i++){
		v[i][0]-=32;
		cout << v[i];
		if(i!=v.size()-2){
			cout << " ";
		}
	}
	cout << ", ";
	tmp=v[v.size()-1];
	for(int i=0; i<tmp.size(); i++){
		tmp[i]-=32;
		cout << tmp[i];
	}
}

int main(){
	string s; getline(cin, s);
	check(s);
	return 0;
}
