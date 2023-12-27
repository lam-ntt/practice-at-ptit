#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin >> test; 
	while(test--){
		int n, m; cin >> n >> m; n*=m;
		vector<int> v; int tmp;
		for(int i=0; i<n; i++){
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
