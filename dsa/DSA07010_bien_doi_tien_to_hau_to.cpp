#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<string> st;
		for(int i=s.size()-1; i>=0; i--){
			if(!(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')){
				st.push(s.substr(i, 1));
			}else{
				string tmp="";
				tmp+=st.top(); st.pop();
				tmp+=st.top(); st.pop();
				tmp+=s.substr(i, 1);
				st.push(tmp);
			}
		}
		cout << st.top() << "\n";
	}
	return 0;
}
