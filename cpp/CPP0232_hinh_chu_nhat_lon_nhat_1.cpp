#include<bits/stdc++.h>
using namespace std;

int a[105][105];

int check(int a[], int s, int n){
	int max=-1, tmp, cnt=s;
	while(cnt--){
		tmp=0;
		for(int i=0; i<n; i++){
			if(a[i]==s){
				tmp+=a[i]; 
				a[i]-=1;
			}
		}
		if(max<tmp){
			max=tmp;
		}
		--s;
	}
	return max;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		
		for(int i=1; i<n; i++){
			for(int j=0; j<m; j++){
				if(a[i][j]!=0){
					a[i][j]+=a[i-1][j];
				}
			}
		}
		
		int temp, res=-1;
		for(int i=0; i<n; i++){
			temp=check(a[i], i+1, m);
			if(res<temp){
				res=temp;
			}
		}
		cout << res << "\n";	
	}
	return 0;
}
