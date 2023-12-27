#include<bits/stdc++.h>
using namespace std;

void check(string s){
	int max=0;
	string tmp;
	for(int i=0; i<s.size(); i++){
		if(s[i]>='0'&&s[i]<='9'){
			tmp="";
			while(s[i]>='0'&&s[i]<='9'){
				tmp+=s[i];
				++i;
			}
			if(max<stoi(tmp)){
				max=stoi(tmp);
			}
		}
	}
	cout << max << "\n";
	
}

int main(){
	int test; cin >> test;
	while(test--){
		string s; cin >> s;
		check(s);
	}
	return 0;
}
