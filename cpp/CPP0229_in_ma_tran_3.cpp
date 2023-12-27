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
		
		int b[n*m], cnt=0;
		vector<int> v; int i, j;
		for(int sum=0; sum<=n+m-2; sum++){
			v.erase(v.begin(), v.end());
			if(sum<m){
				i=0;
			}else{
				i=sum-m+1;
			}
			j=sum-i;
			while(i>-1&&i<n&&j>-1&&j<m){
				v.push_back(a[i++][j--]);
			}
			
			if(sum%2==0){
				for(int i=v.size()-1; i>=0; i--){
					b[cnt++]=v[i];
				}
			}else{
				for(auto it: v){
					b[cnt++]=it;
				}
			}
		}
		
		for(int i=0; i<cnt; i++){
			cout << b[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
