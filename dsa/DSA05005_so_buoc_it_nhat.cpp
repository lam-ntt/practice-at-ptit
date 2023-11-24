#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		vector<int> dp;
		for(int i=0; i<n; i++){
			auto it=upper_bound(dp.begin(), dp.end(), a[i]);
			if(it==dp.end()) dp.push_back(a[i]);
			else *it=a[i];
		}
		cout << n-dp.size() << "\n";
	}
	return 0;
}
