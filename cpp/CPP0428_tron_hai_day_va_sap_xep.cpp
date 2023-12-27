#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int tmp;
		vector<int> v;
		for(int i=0; i<n; i++){
			cin >> tmp;
			v.push_back(tmp);
		}
		for(int i=0; i<m; i++){
			cin >> tmp;
			v.push_back(tmp);
		}
		
		sort(v.begin(), v.end());
		for(auto i: v){
			cout << i << " ";
		}
		cout << "\n";
	}
	return 0;
}
