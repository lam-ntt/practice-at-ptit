#include<bits/stdc++.h>
using namespace std;

int main(){
	ifstream in;
	in.open("DATA.in");
	
	int n, m, tmp;
	in >> n >> m;
	set<int> s1;
	while(n--){
		in >> tmp;
		s1.insert(tmp);
	}
	
	set<int> s2;
	while(m--){
		in >> tmp;
		s2.insert(tmp);
	}
	
	in.close();
	
	for(auto it: s1){
		if(s2.count(it)!=0){
			cout << it << " ";
		}
	}
	cout << "\n";
	return 0;
}
