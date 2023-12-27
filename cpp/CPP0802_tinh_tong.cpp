#include<bits/stdc++.h>
using namespace std;

int check(string s){
	for(int i=0; i<s.size(); i++){
		if(s[i]<'0'||s[i]>'9'){
			return 0;
		}
	}
	
	if(s[0]=='0'){
		return 0;
	}
	
	if(s.size()>=1&&s.size()<=9){
		return 1;
	}
	return 0;
}

int main(){
	ifstream in;
	in.open("DATA.in");
	
	string s;
	vector<string> v;
	while(in >> s){
		if(check(s)){
			cout << s << " ";
			v.push_back(s);
		}
	}
	
	long long sum=0;
	for(auto i: v){
		sum+=stoi(i);
	}
	cout << sum;
	
	in.close();
	return 0;
}
