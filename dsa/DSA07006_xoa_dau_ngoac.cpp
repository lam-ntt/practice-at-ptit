#include<bits/stdc++.h>
using namespace std;

string s; vector<pair<int, int>> v;
int a[15], del[205]={0}; set<string> se;

void check(){
	string tmp=s;
	for(int i=tmp.size()-1; i>=0; i--){
		if(del[i]) tmp.erase(i, 1);
	}
	if(tmp!=s) se.insert(tmp);
}

void tryy(int i){
	for(int j=1; j>=0; j--){
		a[i]=j;
		if(a[i]==0){
			del[v[i].first]=1;
			del[v[i].second]=1;
		}
		if(i==v.size()-1) check();
		else tryy(i+1);
		if(a[i]==0){
			del[v[i].first]=0;
			del[v[i].second]=0;
		}
	}
}

int main(){
	cin >> s;
	v.clear();
	stack<int> st;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='(') st.push(i);
		else if(s[i]==')'){
			v.push_back({st.top(), i});
			st.pop();
		}
	}
	
	se.clear();
	tryy(0);
	for(auto it: se) cout << it << "\n";
	return 0;
}
