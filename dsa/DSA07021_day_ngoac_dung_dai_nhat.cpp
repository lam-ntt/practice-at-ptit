#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int mark[100005]={0};
		stack<int> st;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='(') st.push(i);
			else{
				if(!st.empty()&&s[st.top()]=='('){
					mark[i]=1; mark[st.top()]=1;
					st.pop();
				}
			}
		}
		
		int tmp=0, mx=-1;
		for(int i=0; i<s.size(); i++){
			if(mark[i]) tmp+=1;
			else tmp=0;
			mx=max(mx, tmp);
		}
		cout << mx << "\n";
	}
	return 0;
}
