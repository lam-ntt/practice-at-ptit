#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	cin.ignore();
	set<pair<int, int>> st;
	string s, tmp;
	for(int i=1; i<=n; i++){
		getline(cin, s);
		stringstream ss(s);
		while(ss>>tmp){
			int num=stoi(tmp);
			if(num>i) st.insert({i, num});
			else st.insert({num, i});
		}
	}
	
	for(auto it: st) cout << it.first << " " << it.second << "\n";
	return 0;
}

