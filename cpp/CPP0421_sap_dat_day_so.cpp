#include<bits/stdc++.h>
using namespace std;

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		set<long long> st;
		long long temp;
		for(int i=0; i<n; i++){
			cin >> temp;
			st.insert(temp);
		}
		
		for(int i=0; i<n; i++){
			if(st.count(i)!=0){
				cout << i << " ";
			}else{
				cout << "-1 ";
			}
		}
		cout << "\n";
	}
	return 0;
}
