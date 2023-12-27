#include<bits/stdc++.h>
using namespace std;

int a[1000005], b[1000005];

int main(){
	int test; cin >> test;
	while(test--){
		int m, n; cin >> n >> m;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
		}
		
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				if(a[j]==b[i]){
					cout << a[j] << " ";
					a[j]=0;
				}
			}
		}
		
		sort(a, a+n);
		for(int i=0; i<n; i++){
			if(a[i]!=0){
				cout << a[i] << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
