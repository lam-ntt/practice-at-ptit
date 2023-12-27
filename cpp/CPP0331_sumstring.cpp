#include<bits/stdc++.h>
using namespace std;

string sum(string s1, string s2){
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	if(s1.size()<s2.size()) swap(s1, s2);
	while(s2.size()<s1.size()) s2+="0";
	
	string tmp=""; int temp, nho=0;
	for(int i=0; i<s1.size(); i++){
		temp=(s1[i]-'0')+(s2[i]-'0')+nho;
		tmp+=to_string(temp%10);
		nho=temp/10;
	}
	if(nho!=0){
		tmp+=to_string(nho);
	}
	
	reverse(tmp.begin(), tmp.end());
	return tmp;
}

int check(string s, int start, int len1, int len2){
	string t1=s.substr(start, len1);
	string t2=s.substr(start+len1, len2);
	string tmp=sum(t1, t2);
	if(tmp.size()>s.size()-start-len1-len2) return 0;
	if(tmp==s.substr(start+len1+len2, tmp.size())){
		if(tmp.size()==s.size()-start-len1-len2) return 1;
		else return check(s, start+len1, len2, tmp.size());
	}
	return 0;
}

int solve(string s){
	for(int i=1; i<s.size(); i++){
		for(int j=1; j<s.size()-i; j++){
			if(check(s, 0, i, j)==1) return 1;
		}
	}
	return 0;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(solve(s)) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}
