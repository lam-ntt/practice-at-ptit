#include<bits/stdc++.h>
using namespace std;

int a[1005], c[1005], dp[1005]={0};

int main(){
	int t; cin >> t; 
	while(t--){
		int n, v; cin >> n >> v;
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		for(int i=1; i<=n; i++){
			cin >> c[i];
		}
		
		for(int i=1; i<=n; i++){
			for(int j=v; j>=a[i]; j--){
				dp[j]=max(dp[j], dp[j-a[i]]+c[i]);
			}
		}
		cout << dp[v] << "\n";
	}	
	return 0;
}
