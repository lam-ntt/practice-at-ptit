#include<bits/stdc++.h>
using namespace std;

void change(string &s, int n){
	while(s.size()<n){
		s.insert(0, "0");
	}
}

string sum(string s1, string s2){
	string tmp="";
	int nho=0, temp;
	for(int i=s1.size()-1; i>=0; i--){
		temp=s1[i]+s2[i]+nho-48*2;
		nho=0;
		if(temp>9){
			nho=temp/10;
			temp=temp%10;
		}
		tmp+=to_string(temp);
	}
	if(nho!=0){
		tmp+=to_string(nho);
	}
	reverse(tmp.begin(), tmp.end());
	return tmp;
}

int main(){
	int test; cin >> test;
	while(test--){
		string s1, s2; 
		cin >> s1 >> s2;
		if(s1.size()!=s2.size()){
			if(s1.size()<s2.size()){
				change(s1, s2.size());
			}else{
				change(s2, s1.size());
			}
		}
		
		cout << sum(s1, s2) << "\n";
	}
	return 0;
}
