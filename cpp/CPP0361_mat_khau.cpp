#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	string s[n];
	for(int i=0; i<n; i++){
		cin >> s[i];
	}
	
	int cnt=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(j!=i&&s[i].find(s[j])!=string::npos) ++cnt;
		}
	}
	cout << cnt << "\n";
	return 0;
}
