#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
		stack<int> st; int cur=-1, dis=-1;
		int ok=0;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='(') st.push(i);
			if(s[i]==')'){
				if(i-st.top()==2) ok=1;
				if(cur!=-1&&i-cur==1&&dis!=-1&&i-st.top()-2==dis) ok=1;
				dis=i-st.top();
				cur=i;
				st.pop(); 
			}
		}
		if(ok) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}
