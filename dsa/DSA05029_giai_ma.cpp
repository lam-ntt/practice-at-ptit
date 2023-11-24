#include<bits/stdc++.h>
#define ll long long
using namespace std;

int check(string s){
	if(s[0]=='0') return 1;
	for(int i=1; i<s.size(); i++){
		if(s[i]=='0'&&s[i-1]>'2') return 1;
	}
	return 0;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		ll dp[s.size()]={0};
		
		if(check(s)){
			cout << "0\n";
			continue;
		}
		
		dp[0]=1; 
		if(s[1]>='1'&&s[1]<='9') dp[1]=1;
		int tmp=stoi(s.substr(0, 2));
		if(tmp>=10&&tmp<=26) dp[1]+=1;
		
		for(int i=2; i<s.size(); i++){
			if(s[i]>='1'&&s[i]<='9') dp[i]+=dp[i-1];
			tmp=stoi(s.substr(i-1, 2));
			if(tmp>=10&&tmp<=26) dp[i]+=dp[i-2];
		}
		cout << dp[s.size()-1] << "\n";
	}
	return 0;
}
