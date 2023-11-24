#include<bits/stdc++.h>
using namespace std;

// decr[] luu chi so cua phan tu dau tien nho hon a[i]
// incr[] luu chi so cua phan tu dau tien lon hon a[i]
int n, a[1000005]; 
int incr[1000005], decr[1000005];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
			incr[i]=0; decr[i]=0;
		}
		
		stack<int> st;
		for(int i=n-1; i>=0; i--){
			while(!st.empty()&&a[st.top()]>=a[i]) st.pop();
			if(st.empty()) decr[i]=-1;
			else decr[i]=st.top();
			st.push(i);
		}
		
		stack<int> en;
		for(int i=n-1; i>=0; i--){
			while(!en.empty()&&a[en.top()]<=a[i]) en.pop();
			if(en.empty()) incr[i]=-1;
			else incr[i]=decr[en.top()];
			en.push(i);
		}
		
		for(int i=0; i<n; i++){
			if(incr[i]==-1) cout << "-1 ";
			else cout << a[incr[i]] << " ";
		}
		cout << "\n";
	}
	return 0;
}
