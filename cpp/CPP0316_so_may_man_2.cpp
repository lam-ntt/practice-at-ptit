#include<bits/stdc++.h>
using namespace std;

int check(string s){
	int sum=0;
	for(int i=0; i<s.size(); i++){
		sum+=s[i]-'0';
	}
	
	if(sum<10){
		return sum==9;
	}else{
		string tmp=to_string(sum);
		return check(tmp);
	}
}

int main(){
	int test; cin >> test; 
	while(test--){
		string s; cin >> s;
		cout << check(s) << "\n";
	}
	return 0;
}
