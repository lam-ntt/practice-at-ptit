#include<bits/stdc++.h>
using namespace std;

int n, k, a[100005];
multiset<int> st;

int main(){
	int t; cin >> t;
	while(t--){
		st.clear();
		cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		for(int i=0; i<k; i++){
			st.insert(a[i]);
		}
		cout << *(st.rbegin()) << " ";
		
		for(int i=k; i<n; i++){
			st.erase(st.find(a[i-k]));
			st.insert(a[i]);
			cout << *(st.rbegin()) << " ";
		}
		cout << "\n";
	}
	return 0;
}
