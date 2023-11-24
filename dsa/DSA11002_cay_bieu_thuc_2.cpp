#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s[n+1];
		stack<int> st;
		for(int i=1; i<=n; i++){
			cin >> s[i];
			if(s[i]=="+"||s[i]=="-"||s[i]=="*"||s[i]=="/") st.push(i);
		}
		
		long long idx, a, b;
		string tmp;
		while(!st.empty()){
			idx=st.top(); st.pop();
			a=stoi(s[idx*2]);
			b=stoi(s[idx*2+1]);
			if(s[idx]=="+") s[idx]=to_string(a+b);
			else if(s[idx]=="-") s[idx]=to_string(a-b);
			else if(s[idx]=="*") s[idx]=to_string(a*b);
			else s[idx]=to_string(a/b);			
		}
		cout << s[1] << "\n";
	}
	return 0;
}
