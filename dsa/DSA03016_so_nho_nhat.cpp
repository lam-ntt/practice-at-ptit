#include<bits/stdc++.h>
using namespace std;

void solve(int sum, int digit){
	if(sum>9*digit){
		cout << "-1\n";
		return;
	}
	
	string s="";
	while(sum>9){
		s+="9";
		sum-=9;
		digit-=1;
	}
	if(digit==1) s=to_string(sum)+s;
	else{
		digit--;
		s=to_string(sum-1)+s;
		while(digit-->1) s.insert(0, "0");
		s=to_string(1)+s;
	}
	cout << s << "\n";
}

int main(){
	int t; cin >> t;
	while(t--){
		int s, d; cin >> s >> d;
		solve(s, d);
	}
	return 0;
}
