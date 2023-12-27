#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int tmp, max=-1e9, min=1e9;
		set<int> st;
		
		for(int i=0; i<n; i++){
			cin >> tmp;
			if(tmp<min){
				min=tmp;
			}
			if(tmp>max){
				max=tmp;
			}
			st.insert(tmp);
		}
		
		cout << max-min+1-st.size() << "\n";
	}
	return 0;
}
