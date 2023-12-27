#include<bits/stdc++.h>
using namespace std;

int a[1005];

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		sort(a, a+n);
		vector<int > v;
		for(int i=0; i<floor(n/2); i++){
			v.push_back(a[n-1-i]);
			v.push_back(a[i]);
		}
		if(n%2==1){
			v.push_back(a[n/2]);
		}
		
		for(auto i: v){
			cout << i << " ";
		}
		cout << "\n";
	}
	return 0;
}
