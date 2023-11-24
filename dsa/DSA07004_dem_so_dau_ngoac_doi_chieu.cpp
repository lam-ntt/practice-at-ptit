#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<int> st; int cnt=0;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='(') st.push(i);
			else{
				if(st.empty()){
					cnt+=1;
					st.push(i);
				}else st.pop();
			}
		}
		cnt+=st.size()/2;
		cout << cnt << "\n";
	}
	return 0;
}
