#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1, s2;
	getline(cin, s1);
	cin >> s2;
	
	string tmp;
	stringstream ss(s1);
	while(ss>>tmp){
		if(tmp!=s2){
			cout << tmp << " ";
		}
	}
	return 0;
}
