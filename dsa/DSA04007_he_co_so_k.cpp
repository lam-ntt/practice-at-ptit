#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int k; cin >> k;
		string a, b; cin >> a >> b;
		while(a.size()<b.size()) a.insert(0, "0");
		while(b.size()<a.size()) b.insert(0, "0");
		
		stack<int> st; int carry=0;
		for(int i=a.size()-1; i>=0; i--){
			int tmp=a[i]-'0'+b[i]-'0'+carry;
			st.push(tmp%k);
			if(tmp>=k) carry=tmp/k;
			else carry=0;
		}
		if(carry!=0) st.push(carry);
		
		while(!st.empty()){
			cout << st.top();
			st.pop();
		}
		cout << "\n";
	}
	return 0;
}
