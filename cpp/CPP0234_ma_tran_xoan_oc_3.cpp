#include<bits/stdc++.h>
using namespace std;

int a[105][105];

int main(){
	int t; cin >> t;
	while(t--){
		int n, m, k; cin >> n >> m >> k;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		
		int num[n*m], cnt=0;
		int l=0, r=m-1, t=0, b=n-1;
		while(1){
			if(l<=r){
				for(int i=l; i<=r; i++){
					num[cnt++]=a[t][i];
				}
				++t;
			}else{
				break;
			}
			
			if(t<=b){
				for(int i=t; i<=b; i++){
					num[cnt++]=a[i][r];
				}
				--r;
			}else{
				break;
			}
			
			if(r>=l){
				for(int i=r; i>=l; i--){
					num[cnt++]=a[b][i];
				}
				--b;
			}else{
				break;
			}
			
			if(b>=t){
				for(int i=b; i>=t; i--){
					num[cnt++]=a[i][l];
				}
				++l;
			}else{
				break;
			}
		}
		
		cout << num[k-1] << "\n";
	}
	return 0;
}
