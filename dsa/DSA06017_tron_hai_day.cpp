#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m, tmp;
		multiset<int> st;
		cin >> n >> m;
		for(int i=0; i<n; i++){
			cin >> tmp;
			st.insert(tmp);
		}
		for(int i=0; i<m; i++){
			cin >> tmp;
			st.insert(tmp);
		}
		
		for(auto it: st){
			cout << it << " ";
		}
		cout << "\n";
	}
	return 0;
}
