#include<bits/stdc++.h>
using namespace std;

string conversion(string s){
	string res="";
	int cnt=0;
	stack<int> st; 
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
				if(s[i]=='+') res+="-";
				else res+="+";
			}else res+=s.substr(i, 1);
		}else res+=s.substr(i, 1);
	}
	return res;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s1, s2; cin >> s1 >> s2;
		if(conversion(s1)==conversion(s2)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
