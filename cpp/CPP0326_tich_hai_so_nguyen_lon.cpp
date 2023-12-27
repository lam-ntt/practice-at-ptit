#include<bits/stdc++.h>
using namespace std;

string sum(string s1, string s2){
	if(s1.size()<s2.size()) swap(s1, s2);
	while(s2.size()<s1.size()) s2="0"+s2;
	
	string tmp=""; int temp, nho=0;
	for(int i=s1.size()-1; i>=0; i--){
		temp=s1[i]-'0'+s2[i]-'0'+nho;
		tmp=to_string(temp%10)+tmp;
		nho=temp/10;
	}
	if(nho!=0){
		tmp=to_string(nho)+tmp;
	}
	return tmp;
}

string multiple(string s, int n){
	string tmp=""; int temp, nho=0;
	for(int i=s.size()-1; i>=0; i--){
		temp=(s[i]-'0')*n+nho;
		tmp=to_string(temp%10)+tmp;
		nho=temp/10;
	}
	if(nho!=0){
		tmp=to_string(nho)+tmp;
	}
	return tmp;
}

void solve(string s1, string s2){
	reverse(s2.begin(), s2.end());
	string res="", tmp;int cnt=0;
	for(int i=0; i<s2.size(); i++){
		tmp=multiple(s1, s2[i]-'0');
		cnt=i; while(cnt--) tmp+="0";
		res=sum(tmp, res);
	}
	cout << res << "\n";
}

int main(){
	int t; cin >> t;
	while(t--){
		string s1, s2; cin >> s1 >> s2;
		if(s1.size()<s2.size()) swap(s1, s2);
		solve(s1, s2);
	}
	return 0;
}
