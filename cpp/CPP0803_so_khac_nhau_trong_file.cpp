#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
	ifstream in;
	in.open("DATA.in");
	int n;
	map<int, int> mp;
	while(in >> n){
		++mp[n];
	}
	for(auto it: mp){
		cout << it.first << " " << it.second << "\n";
	}
	in.close();
	return 0;
}
