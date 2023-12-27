#include<bits/stdc++.h>
using namespace std;

void lower(string &s){
	for(int i=0; i<s.size(); i++){
		s[i]=tolower(s[i]);
	}
}

int main(){
	ifstream in, input;
	in.open("DATA1.in");
	input.open("DATA2.in");
	
	set<string> s1, s2, s;
	string tmp;
	while(!in.eof()){
		in >> tmp;
		lower(tmp);
		s1.insert(tmp);
		s.insert(tmp);
	}
	while(!input.eof()){
		input >> tmp;
		lower(tmp);
		s2.insert(tmp);
		s.insert(tmp);
	}
	
	in.close();
	input.close();
	
	for(auto it: s){
		cout << it << " ";
	}
	cout << "\n";
	for(auto it: s1){
		if(s2.count(it)!=0){
			cout << it << " ";
		}
	}
	cout << "\n";
	
	return 0;
}
