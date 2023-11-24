#include<bits/stdc++.h>
#define ll long long
using namespace std;

int check(char k){
	return k>='0'&&k<='9';
}

int cmp(string a, string b){
	if(a=="+"||a=="-"){
		if(b=="+"||b=="-") return 0;
		else return -1;
	}else{
		if(b=="+"||b=="-") return 1;
		else return 0;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		string se; cin >> se;
		for(int i=1; i<se.size(); i++){
			if(!(check(se[i])&&check(se[i-1]))){
				se.insert(i, " ");
				++i;
			}
		}	
		string s[105]; int cnt=0;
		stringstream ss(se);
		while(ss>>s[cnt++]){
		}
		cnt--;
		
		stack<string> st;
		vector<string> v;
		for(int i=0; i<cnt; i++){
			if(s[i]=="(") st.push(s[i]);
			else if(s[i]==")"){
				while(st.top()!="("){
					v.push_back(st.top());
					st.pop();
				}
				st.pop();
			}else if(s[i]=="+"||s[i]=="-"||s[i]=="*"||s[i]=="/"){
				while(!st.empty()&&st.top()!="("&&cmp(st.top(), s[i])>=0){
					v.push_back(st.top());
					st.pop();
				}
				st.push(s[i]);
			}else v.push_back(s[i]);
		}
		while(!st.empty()){
			v.push_back(st.top());
			st.pop();
		}
		
		stack<ll> res;
		for(int i=0; i<v.size(); i++){
			if(v[i]=="+"||v[i]=="-"||v[i]=="*"||v[i]=="/"){
				ll a=res.top(); res.pop();
				ll b=res.top(); res.pop();
				if(v[i]=="+") res.push(b+a);
				else if(v[i]=="-") res.push(b-a);
				else if(v[i]=="*") res.push(b*a);
				else res.push(b/a);
			}else res.push(stoll(v[i]));
		}
		cout << res.top() << "\n";		
	}
	return 0;
}
