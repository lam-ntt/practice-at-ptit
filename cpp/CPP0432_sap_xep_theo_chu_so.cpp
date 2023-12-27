#include<bits/stdc++.h>
using namespace std;

int a[100005];

int cmp(const int a,const int b){
	string n=to_string(a), m=to_string(b);
	string e=n+m, f=m+n;
	return e>f;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n, cmp);
		for(int i=0; i<n; i++){
			cout << a[i];
		}
		cout << "\n";
	}
	return 0;
}
