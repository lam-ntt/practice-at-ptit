#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<string> st;
		for(int i=s.size()-1; i>=0; i--){
			if(s[i]>='a'&&s[i]<='z') st.push(s.substr(i, 1));			
			else if(s[i]==']') st.push(s.substr(i, 1));
			else if(s[i]=='['){
				string tmp="";
				while(st.top()!="]"){
					tmp+=st.top();
					st.pop();
				}
				st.pop();
				
				if(!(s[i-1]>='0'&&s[i-1]<='9')) st.push(tmp);	
				else{
					int j=i-1;
					string d="";
					while(j>=0&&(s[j]>='0'&&s[j]<='9')){
						d.insert(0, s.substr(j--, 1));
					} 
					int cnt=stoi(d);
					
					string res="";
					while(cnt--) res+=tmp;
					st.push(res);
				}		
			}
		}
		
		while(!st.empty()){
			cout << st.top();
			st.pop();
		}
		cout << '\n';
	}
	return 0;
}
