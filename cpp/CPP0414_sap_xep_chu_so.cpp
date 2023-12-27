#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		string s;
		set<char> st;
		
		for(int i=0; i<n; i++){
			cin >> s;
			for(auto i: s){
				st.insert(i);
			}
		}
		
		for(auto i: st){
			cout << i << " ";
		}
		cout << "\n";	
	}
	return 0;
}
