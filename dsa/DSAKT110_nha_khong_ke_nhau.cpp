#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, a[1000005];
ll dp[1000005], mx[1000005];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		dp[0]=a[0]; dp[1]=a[1];
		mx[0]=a[0]; mx[1]=max(mx[0], dp[1]);
		for(int i=2; i<n; i++){
			dp[i]=mx[i-2]+a[i];
			mx[i]=max(mx[i-1], dp[i]);
		}
		cout << mx[n-1] << "\n";
	}
	return 0;
}
