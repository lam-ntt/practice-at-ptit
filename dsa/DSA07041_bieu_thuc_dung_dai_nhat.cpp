#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int mark[105]={0};
		stack<int> st;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='(') st.push(i);
			else if(!st.empty()){
				mark[i]=1;
				mark[st.top()]=1;
				st.pop();
			}
		}
		
		int cnt=0;
		for(int i=0; i<s.size(); i++) if(mark[i]) ++cnt;
		cout << cnt << "\n";
	}
	return 0;
}
