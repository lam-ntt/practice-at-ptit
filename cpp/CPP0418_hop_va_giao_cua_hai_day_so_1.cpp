#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		set<int> st, st1, st2; int tmp;
		for(int i=0; i<n; i++){
			cin >> tmp;
			st.insert(tmp);
			st1.insert(tmp);
		}
		for(int i=0; i<m; i++){
			cin >> tmp;
			st.insert(tmp);
			st2.insert(tmp);
		}
		
		for(auto i: st){
			cout << i << " ";
		}
		cout << "\n";
		
		for(auto i: st1){
			if(st2.count(i)!=0){
				cout << i << " ";
			}
		}
		cout << "\n";
		
		
	}
	return 0;
}
