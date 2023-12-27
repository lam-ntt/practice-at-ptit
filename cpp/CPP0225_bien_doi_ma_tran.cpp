#include<bits/stdc++.h>
using namespace std;

int a[105][105];

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int sum[n*2]={0};
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> a[i][j];
				sum[i]+=a[i][j];
			}
		}
		
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				sum[n+i]+=a[j][i];
			}
		}
		
		long long max=-1, tmp=0;
		for(int i=0; i<n*2; i++){
			if(max<sum[i]){
				max=sum[i];
			}
		}
		for(int i=0; i<n; i++){
			tmp+=(max-sum[i]);
		}
		cout << tmp << "\n";
				
	}
	return 0;
}
