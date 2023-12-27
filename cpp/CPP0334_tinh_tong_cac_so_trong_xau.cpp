#include<bits/stdc++.h>
using namespace std;

void check(string s){
	int sum=0;
	string tmp;
	for(int i=0; i<s.size(); i++){
		if(s[i]>='0'&&s[i]<='9'){
			tmp="";
			while(s[i]>='0'&&s[i]<='9'){
				tmp+=s[i];
				++i;
			}
			sum+=stoi(tmp);
		}
	}
	cout << sum << "\n";
}

int main(){
	int test; cin >> test;
	while(test--){
		string s; cin >> s;
		check(s);
	}
	return 0;
}
