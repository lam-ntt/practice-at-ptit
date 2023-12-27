#include<bits/stdc++.h>
using namespace std;

void solve(string s1, string s2){
	int count1[256]={0}, count2[256]={0};
	for(int i=0; i<s2.size(); i++){
		count2[s2[i]]++;
	}
	int cnt=0, l=0, idx=-1, length=1000000000;
	for(int i=0; i<s1.size(); i++){
		count1[s1[i]]++;
		if(count1[s1[i]]<=count2[s1[i]]) ++cnt;
		if(cnt==s2.size()){
			while(count2[s1[l]]==0||count1[s1[l]]>count2[s1[l]]){
				if(count1[s1[l]]>count2[s1[l]])
					count1[s1[l]]--;
				++l;
			}
			if(length>i-l+1){
				idx=l; length=i-l+1;
			}	
		}
	}
	
	if(idx==-1){
		cout << idx << "\n";
	}else{
		cout << s1.substr(idx, length) << "\n";
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		string s1, s2; cin >> s1 >> s2;
		solve(s1, s2);
	}
	return 0;
}
