#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n][m], r[n][m], c[n][m], mx[n][m];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
				if(i==0||j==0){
					r[i][j]=a[i][j];
					c[i][j]=a[i][j];
					mx[i][j]=min(r[i][j], c[i][j]);
				}
			}
		}
		
		for(int i=1; i<n; i++){
			for(int j=1; j<m; j++){
				if(a[i][j]){
					r[i][j]=r[i-1][j]+1;
					c[i][j]=c[i][j-1]+1;
				}else{
					r[i][j]=0;
					c[i][j]=0;
				}
				mx[i][j]=min(r[i][j], c[i][j]);
			}
		}
		
		int res=0;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(mx[i][j]!=0){
					int k=1;
					while(i+k<n&&i+k<m){
						if(mx[i+k][j+k]>=k+1) ++k;
						else break;
					}
					res=max(res, k);
				}
			}
		}
		cout << res << "\n";
	}
	return 0;
}
//
//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int t; cin >> t;
//	while(t--){
//		int n, m; cin >> n >> m;
//		int a[n][m], mn[n][m];
//		for(int i=0; i<n; i++){
//			for(int j=0; j<m; j++){
//				cin >> a[i][j];
//				if(i==0||j==0) mn[i][j]=a[i][j];
//			}
//		}
//		
//		for(int i=1; i<n; i++){
//			for(int j=1; j<m; j++){
//				if(a[i][j]) mn[i][j]=min(mn[i-1][j], mn[i][j-1])+1;
//				else mn[i][j]=0;
//			}
//		}
//		
//		int res=0;
//		for(int i=0; i<n; i++){
//			for(int j=0; j<m; j++){
//				if(mn[i][j]!=0){
//					int k=1;
//					while(i+k<n&&i+k<m){
//						if(mn[i+k][j+k]>=k+1) ++k;
//						else break;
//					}
//					res=max(res, k);
//				}
//			}
//		}
//		cout << res << "\n";
//	}
//	return 0;
//}
