#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0; i<n; i++) cin >> a[i];
		
		stack<int> st;
		for(int i=n-1; i>=0; i--){
			while(!st.empty()&&a[i]>=st.top()) st.pop();
			if(st.empty()){
				st.push(a[i]);
				a[i]=-1;
			}else{
				int tmp=st.top();
				st.push(a[i]);
				a[i]=tmp;
			}
		}
		for(int i=0; i<n; i++) cout << a[i] << " ";
		cout << "\n";
	}
	return 0;
}
