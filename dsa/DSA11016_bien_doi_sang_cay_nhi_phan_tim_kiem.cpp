#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int par, child; char pos;
		set<int> st;
		for(int i=1; i<=n; i++){
			cin >> par >> child >> pos;
			if(i==1) st.insert(par);
			st.insert(child);
		}
		for(auto it: st) cout << it << " ";
		cout << "\n";
	}
	return 0;
}
