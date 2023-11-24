#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, a[1005];
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		int value=1e9;
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(abs(value)>abs(a[i]+a[j])){
					value=a[i]+a[j];
				}
			}
		}
		cout << value << "\n";
	}
	return 0;
}
