#include<bits/stdc++.h>
using namespace std;

int n, s, a[205];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> s;
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		
		int dp[s+1]={0};
		dp[0]=1;
		for(int i=1; i<=n; i++){
			for(int j=s; j>=a[i]; j--){
				if(dp[j-a[i]]==1) dp[j]=1;
			}
		}
		if(dp[s]) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int n, s, a[205], dp[205][40005];

// int main(){
// 	int t; cin >> t;
// 	while(t--){
// 		cin >> n >> s;
// 		for(int i=0; i<n; i++){
// 			cin >> a[i];
// 		}
// 		for(int i=0; i<n; i++){
// 			for(int j=0; j<=s; j++){
// 				dp[i][j]=0;
// 			}
// 		}
		
// 		dp[0][a[0]]=1;
// 		for(int i=1; i<n; i++){
// 			dp[i][a[i]]=1;
// 			for(int j=s; j>=1; j--){
// 				if(j>a[i]&&dp[i-1][j-a[i]]) dp[i][j]=1;
// 				if(dp[i-1][j]) dp[i][j]=1;
// 			}
// 		}
// 		if(dp[n-1][s]) cout << "YES\n";
// 		else cout << "NO\n";	
// 	}
// 	return 0;
// }

