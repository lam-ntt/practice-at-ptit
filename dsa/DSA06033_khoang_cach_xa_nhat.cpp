// #include<bits/stdc++.h>
// using namespace std;

// int n, a[100005];

// int main(){
// 	int t; cin >> t;
// 	while(t--){
// 		cin >> n;
// 		for(int i=0; i<n; i++){
// 			cin >> a[i];
// 		}
		
// 		int k=n-1, ok;
// 		while(k){
// 			ok=0;
// 			for(int i=0; i+k<n; i++){
// 				if(a[i]<a[i+k]){
// 					ok=1; break;
// 				}
// 			}
// 			if(ok) break;
// 			--k;
// 		}
		
// 		if(ok) cout << k << "\n";
// 		else cout << "-1\n";
// 	}
// 	return 0;
// }

//#include<bits/stdc++.h>
//using namespace std;
//
//int n, a[100005], maxR[100005];
//
//int find(int l, int r, int value){
//	if(l>r) return -1;
//	int m=(l+r)/2;
//	if(maxR[m]>value){
//		return max(m, find(m+1, r, value));
//	}
//	if(maxR[m]<value) return find(l, m-1, value);
//	else return find(m+1, r, value);
//}
//
//int main(){
//	int t; cin >> t;
//	while(t--){
//		cin >> n;
//		for(int i=0; i<n; i++){
//			cin >> a[i];
//			maxR[i]=a[i];
//		}
//		
//		for(int i=n-2; i>=0; i--){
//			maxR[i]=max(maxR[i], maxR[i+1]);
//		}
//		int res=-1;
//		for(int i=0; i<n-1; i++){
//			int idx=find(i+1, n-1, a[i]);
//			res=max(res, idx-i);
//		}
//		cout << res << "\n";
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;

int n, a[100005], minL[100005], maxR[100005];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
			minL[i]=a[i];
			maxR[i]=a[i];
		}
		
		for(int i=1; i<n; i++){
			minL[i]=min(minL[i], minL[i-1]);
		}
		for(int i=n-2; i>=0; i--){
			maxR[i]=max(maxR[i], maxR[i+1]);
		}
		
		int res=-1;
		int l=0, r=0;
		while(l<n&&r<n){
			if(minL[l]<maxR[r]) ++r;
			else ++l;
			res=max(res, r-l-1);
		}
		cout << res << "\n";
	}
	return 0;
}
