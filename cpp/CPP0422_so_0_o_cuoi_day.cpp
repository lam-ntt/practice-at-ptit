#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		long long temp, cnt=0;
		vector<long long> v;
		for(int i=0; i<n; i++){
			cin >> temp;
			if(temp>0){
				v.push_back(temp);
				++cnt;
			}
		}
		
		cnt=n-cnt;
		for(auto i: v){
			cout << i << " ";
		}
		for(int i=0; i<cnt; i++){
			cout << "0 ";
		}
		cout << "\n";
		
	}
	return 0;
}
