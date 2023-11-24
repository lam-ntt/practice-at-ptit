#include<bits/stdc++.h>
using namespace std;

int cmp(char a, char b){
	if(b=='+'||b=='-'){
		if(a=='+'||a=='-') return 0;
		else return 1;
	}else if(b=='*'||b=='/'){
		if(a=='+'||a=='-') return -1;
		else if(a=='*'||a=='/') return 0;
		else return 1;
	}else if(b=='^'){
		if(a=='^') return 0;
		else return -1;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<int> st;
		for(int i=0; i<s.size(); i++){
			if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')) 
				cout << s[i];
			else if(s[i]=='(') st.push(i);
			else if(s[i]==')'){
				while(s[st.top()]!='('){
					cout << s[st.top()];
					st.pop();
				}
				st.pop();
			}else{	
				if(!st.empty()&&s[st.top()]!='('&&cmp(s[st.top()], s[i])>=0){
					// To pass test: 3+4*4/4+4^6
					while(!st.empty()&&s[st.top()]!='('&&cmp(s[st.top()], s[i])>=0){
						cout << s[st.top()];
						st.pop();
					}
				}
				st.push(i);
			}
		}
		while(!st.empty()){
			cout << s[st.top()];
			st.pop();
		}
		cout << "\n";
	}
	return 0;
}
