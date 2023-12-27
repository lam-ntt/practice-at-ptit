#include<bits/stdc++.h>
using namespace std;

void check(string s, int option){
	for(int i=0; i<s.size(); i++){
		s[i]=tolower(s[i]);
	}
	
	vector<string> v;
	string tmp;
	stringstream ss(s);
	while(ss>>tmp){
		tmp[0]-=32;
		v.push_back(tmp);
	}
	
	if(option==1){
		cout << v[v.size()-1] << " ";
		for(int i=0; i<v.size()-1; i++){
			cout << v[i] << " ";
		}
	}else{
		for(int i=1; i<v.size(); i++){
			cout << v[i] << " ";
		}
		cout << v[0];
	}
	cout << "\n";
}

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		cin.ignore();
		string s; getline(cin, s);
		check(s, n);
	}
	return 0;
}
