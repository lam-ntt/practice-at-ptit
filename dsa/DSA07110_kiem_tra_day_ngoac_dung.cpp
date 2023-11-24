#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int mark[100005]={0};
		stack<int> st;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='('||s[i]=='['||s[i]=='{') st.push(i);
			else{
				if(!st.empty()){
					int j=st.top();
					if((s[j]=='('&&s[i]==')')||(s[j]=='['&&s[i]==']')||(s[j]=='{'&&s[i]=='}')){
						mark[j]=1; mark[i]=1;
						st.pop();
					}
				}
			}
		}
		
		int tmp=0, mx=-1;
		for(int i=0; i<s.size(); i++){
			if(mark[i]) tmp++;
			else tmp=0;
			mx=max(mx, tmp);
		}
		if(mx==s.size()) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
