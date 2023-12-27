#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		long long max=-1e7, min=1e7;
		int tmp;
		for(int i=0; i<n; i++){
			cin >> tmp;
			if(max<tmp){
				max=tmp;
			}
		}
		
		for(int i=0; i<m; i++){
			cin >> tmp;
			if(min>tmp){
				min=tmp;
			}
		}
		
		cout << max*min << "\n";
	}
	return 0;
}
