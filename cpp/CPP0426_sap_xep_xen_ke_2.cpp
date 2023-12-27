#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> v; int tmp;
		for(int i=0; i<n; i++){
			cin >> tmp;
			v.push_back(tmp);
		}
		sort(v.begin(), v.end());
		
		int cnt=0;
		while(v.size()!=0){
			if(cnt%2==0){
				cout << v[v.size()-1] << " ";
				v.pop_back(); ++cnt;
			}else{
				cout << v[0] << " ";
				v.erase(v.begin()); ++cnt;
			}
		}
		cout << "\n";
	}
	return 0;
}
