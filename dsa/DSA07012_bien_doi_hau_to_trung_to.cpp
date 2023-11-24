#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<string> st;
		for(int i=0; i<s.size(); i++){
			if(!(s[i]=='+'|s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')){
				st.push(s.substr(i, 1));
			}else{
				string tmp1=st.top(); st.pop();
				string tmp2=st.top(); st.pop();
				string tmp="(";
				tmp+=tmp2; 
				tmp+=s.substr(i, 1);
				tmp+=tmp1;
				tmp+=")";
				st.push(tmp);
			}
		}
		cout << st.top() << "\n";
	}
	return 0;
}
