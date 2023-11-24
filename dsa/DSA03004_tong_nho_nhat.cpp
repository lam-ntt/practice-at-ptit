#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[25];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		
		string s1="", s2=""; int cnt=0;
		for(int i=0; i<n/2; i++){
			s1+=to_string(a[cnt++]);
			s2+=to_string(a[cnt++]);
		}
		if(cnt==n-1) s1+=to_string(a[cnt]);
		cout << stoll(s1)+stoll(s2) << "\n";
	}
	return 0;
}
