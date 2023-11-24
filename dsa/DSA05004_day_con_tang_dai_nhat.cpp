//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int n; cin >> n;
//	int a[n];
//	for(int i=0; i<n; i++){
//		cin >> a[i];
//	}	
//	int dp[n];
//	for(int i=0; i<n; i++){
//		dp[i]=1;
//	}
//	
//	int mx=-1;
//	for(int i=1; i<n; i++){
//		for(int j=0; j<i; j++){
//			if(a[j]<a[i]) dp[i]=max(dp[i], dp[j]+1);
//		}
//		mx=max(mx, dp[i]);
//	}
//	cout << mx;
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	vector<int> dp;
	for(int i=0; i<n; i++){
		auto it=lower_bound(dp.begin(), dp.end(), a[i]);
		if(it==dp.end()) dp.push_back(a[i]);
		else *it=a[i];
	}
	cout << dp.size();
	return 0;
}
