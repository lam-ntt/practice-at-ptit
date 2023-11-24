#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<int> st; int cnt=0;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='('){
				if(i>0){	
					if(s[i-1]=='-') ++cnt;
					if(s[i-1]=='-'||s[i-1]=='+') st.push(i-1);
					else st.push(-1);
				}else st.push(-1);	
			}else if(s[i]==')'){
				if(!st.empty()&&st.top()!=-1&&s[st.top()]=='-') --cnt;
				st.pop();
			}else if(s[i]=='+'||s[i]=='-'){
				if(cnt%2==1){
					if(s[i]=='+') cout << "-";
					else cout << "+";
				}else cout << s[i];
			}else cout << s[i];
		}
		cout << "\n";
	}
	return 0;
}
