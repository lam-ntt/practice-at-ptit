#include<bits/stdc++.h>
using namespace std;

int n, a[1000005], mark[1000005];

int main(){
	int t; cin >> t;
	while(t--){
		for(int i=0; i<=1000000; i++) mark[i]=0;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
			++mark[a[i]];
		}
		
		stack<int> st;
		for(int i=n-1; i>=0; i--){
			while(!st.empty()&&mark[st.top()]<=mark[a[i]]) st.pop();
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
