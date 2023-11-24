#include<bits/stdc++.h>
using namespace std;

int n, m, a[100005], b[100005];

int main(){
	int t; cin >> t;
	while(t--){
		set<int> s, s1;
		cin >> n >> m;
		for(int i=0; i<n; i++){
			cin >> a[i];
			s.insert(a[i]);
			s1.insert(a[i]);
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
			s.insert(b[i]);
		}
		
		for(auto it: s){
			cout << it << " ";
		}
		cout << "\n";
		for(int i=0; i<m; i++){
			if(s1.count(b[i])!=0){
				cout << b[i] << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
