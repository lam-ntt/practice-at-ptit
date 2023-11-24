#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[100005], cnt=0;
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(s=="PUSH") cin >> a[cnt++];
		else if(s=="POP"){
			if(cnt>0) cnt--;
		}
		else if(s=="PRINT"){
			if(cnt==0) cout << "NONE\n";
			else cout << a[cnt-1] << "\n";
		}
	}
	return 0;
}
