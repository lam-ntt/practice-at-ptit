#include<bits/stdc++.h>
using namespace std;

void check(string s){
	int cnt;
	for(int i=0; i<s.size(); i++){
		if(i==0||s[i]!=s[i-1]){
			cout << s[i];
			cnt=1;
		}
		if(i!=0&&s[i]==s[i-1]){
			++cnt;
		}
		if(i==s.size()-1||s[i]!=s[i+1]){
			cout << cnt;
		}
	}
	cout << "\n";
}

int main(){
	int test; cin >> test;
	cin.ignore();
	while(test--){
		string s; getline(cin, s);
		check(s);
	}
	return 0;
}
