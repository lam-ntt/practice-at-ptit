#include<bits/stdc++.h>
using namespace std;

void change(string &s, int n){
	while(s.size()<n){
		s.insert(0, "0");
	}
}

string subtract(string s1, string s2){
	string tmp;
	if(s1<s2){
		tmp=s1; s1=s2; s2=tmp;
	}
	
	int nho=0, temp; tmp="";
	for(int i=s1.size()-1; i>=0; i--){
		temp=s1[i]-s2[i]-nho;
		nho=0;
		if(temp<0){
			temp+=10; nho=1;
		}
		tmp+=to_string(temp);	
	}
	reverse(tmp.begin(), tmp.end());
	return tmp;
}

int main(){
	int test; cin >> test;
	while(test--){
		string s1, s2;2
		cin >> s1 >> s2;
		
		if(s1.size()!=s2.size()){
			if(s1.size()<s2.size()){
				change(s1, s2.size());
			}else{
				change(s2, s1.size());
			}
		}
		
		cout << subtract(s1, s2) << "\n";
	}
	return 0;
}
