#include<bits/stdc++.h>
using namespace std;

int a[1005];

int main(){
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		sort(a, a+n);

		if(n%2==0){
			for(int i=0; i<n/2; i++){
				cout << a[i] << " " << a[i+n/2] << " ";
			}
		}else{
			for(int i=0; i<n/2; i++){
				cout << a[i] << " " << a[i+n/2+1] << " ";
			}
			cout << a[n/2];
		}
		cout << "\n";
	}
	return 0;
}
