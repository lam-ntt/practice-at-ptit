#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	cin.ignore();
	string tmp;
	set<string> s;
	while(n--){
		getline(cin, tmp);
		s.insert(tmp);
	}
	cout << s.size();
	return 0;
}
