#include<bits/stdc++.h>
using namespace std;

int a[105][105];

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		
		int l=0, r=m-1, t=0, b=n-1; 
		int k, tmp;
		while(l<r&&t<b){
			tmp=a[t][l]; a[t][l]=a[t+1][l];
			for(int i=l+1; i<=r; i++){
				k=a[t][i];
				a[t][i]=tmp;
				tmp=k;
			}
			++t;
			
			for(int i=t; i<=b; i++){
				k=a[i][r];
				a[i][r]=tmp;
				tmp=k;
			}
			--r;
			
			for(int i=r; i>=l; i--){
				k=a[b][i];
				a[b][i]=tmp;
				tmp=k;
			}
			--b;
			
			for(int i=b; i>=t; i--){
				k=a[i][l];
				a[i][l]=tmp;
				tmp=k;
			}
			++l;
		}
		
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cout << a[i][j] << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
