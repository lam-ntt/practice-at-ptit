#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin >> test;
	cin.ignore();
	while(test--){
		string s; 
		getline(cin, s);
		
		string tmp;
		stringstream ss(s);
		int cnt=0;
		while(ss>>tmp){
			++cnt;
		}
		cout << cnt << "\n";
	}
	return 0;
}
