#include<bits/stdc++.h>
using namespace std;

int check(string s){
	string tmp;
	tmp.insert(0, s, 9, 2);
	tmp.insert(0, s, 5, 3);
	
	if(tmp[0]==tmp[1]&&tmp[1]==tmp[2]&&tmp[3]==tmp[4]){
		return 1;
	}
	
	int cnt=0;
	for(int i=1; i<tmp.size(); i++){
		if(tmp[i]>tmp[i-1]){
			++cnt;
		}
	}
	if(cnt==tmp.size()-1){
		return 1;
	}
	
	cnt=0;
	for(int i=0; i<tmp.size(); i++){
		if(tmp[i]=='6'||tmp[i]=='8'){
			++cnt;
		}
	}
	if(cnt==tmp.size()){
		return 1;
	}
	
	return 0;
}

int main(){
	int test; cin >> test;
	while(test--){
		string s; cin >> s;
		if(check(s)){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}
