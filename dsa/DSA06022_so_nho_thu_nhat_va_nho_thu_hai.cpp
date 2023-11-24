#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, tmp;
		set<int> st;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> tmp;
			st.insert(tmp);
		}
		
		if(st.size()<2) cout << "-1\n";
		else{
			int cnt=0;
			for(auto it: st){
				cout << it << " ";
				++cnt;
				if(cnt==2) break;
			}
			cout << "\n";
		}
	}
	return 0;
}
