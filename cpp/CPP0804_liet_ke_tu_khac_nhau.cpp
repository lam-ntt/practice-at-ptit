#include<bits/stdc++.h>
using namespace std;

int main(){
	ifstream in;
	in.open("VANBAN.in");
	
	set<string> s;
	string tmp;
	while(in >> tmp){
		for(int i=0; i<tmp.size(); i++){
			tmp[i]=tolower(tmp[i]);
		}
		s.insert(tmp);
	}
	for(auto it: s){
		cout << it << "\n";
	}
	in.close();
	return 0;
}
