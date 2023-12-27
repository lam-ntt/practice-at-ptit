#include<bits/stdc++.h>
using namespace std;

int a[100005];

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		for(int i=0; i<n-1; i++){
			if(a[i+1]!=0&&a[i+1]==a[i]){
				a[i]*=2; a[i+1]=0; ++i;
			}
		}
		
		int cnt=0;
		for(int i=0; i<n; i++){
			if(a[i]!=0){
				cout << a[i] << " ";
				++cnt;
			}
		}
		for(int i=0; i<n-cnt; i++){
			cout << "0 ";
		}
		cout << "\n";
	}
	return 0;
}
