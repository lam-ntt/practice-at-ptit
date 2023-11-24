#include<bits/stdc++.h>
using namespace std;

void solve(int digit, int sum){
	if(digit==0||(digit>1&&sum==0)||sum>9*digit){
		cout << "-1 -1\n";
		return;
	}
	
	int tmp=sum;
	string mx="";
	while(sum>0){
		if(sum>=9){
			mx+="9";
			sum-=9;
		}else{
			mx+=to_string(sum);
			sum=0;
		}
	}
	while(digit-mx.size()>0) mx+="0";
	
	sum=tmp;
	string mn="";
	while(sum>9){
		mn+="9";
		sum-=9;
	}
	if(digit-1==mn.size()) mn=to_string(sum)+mn;
	else{
		mn=to_string(sum-1)+mn;
		while(digit-mn.size()>1) mn="0"+mn;
		mn="1"+mn;
	}
	
	cout << mn << " " << mx;
}

int main(){
	int n, s; cin >> n >> s;
	solve(n, s);
	return 0;
}
