#include<bits/stdc++.h>
using namespace std;

int a[1000005];

int check(int n, int s){
	for(int i=0; i<s; i++){
		if(a[i]==a[s]){
			return 1;
		}
	}
	return 0;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		int value=-1;
		for(int i=0; i<n; i++){
			if(check(n, i)){
				value=a[i]; break;
			}
		}
		cout << value << "\n";
	}
	return 0;
}
