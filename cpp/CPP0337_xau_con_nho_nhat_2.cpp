#include<bits/stdc++.h>
using namespace std;

void solve(string s){
	int count1[256]={0}, count2[256]={0};
	set<char> st;
	for(int i=0; i<s.size(); i++){
		st.insert(s[i]);
		count2[s[i]]=1;
	}
	
	int cnt=0, l=0, length=1000000;
	for(int i=0; i<s.size(); i++){
		++count1[s[i]];
		if(count1[s[i]]<=count2[s[i]]) ++cnt;
		if(cnt==st.size()){
			while(count2[s[l]]==0||count1[s[l]]>count2[s[l]]){
				if(count1[s[l]]>count2[s[l]])
					count1[s[l]]--;
				++l;
			}
			if(i-l+1<length){
				length=i-l+1; 
			}
		}
	}
	
	cout << length << "\n";
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		solve(s);
	}
	return 0;
}
