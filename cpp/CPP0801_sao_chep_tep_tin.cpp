#include<bits/stdc++.h>
using namespace std;

int main(){
	ifstream in{"PTIT.in"};
	ofstream out{"PTIT.out"};
	
	if(in.eof()){
		cout << "1";
	}
	
	string s;
	while(!in.eof()){
		getline(in, s);
		out << s << "\n";
	}
	
	in.close();
	out.close();
	return 0;
}
