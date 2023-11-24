#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, tmp, l=-1, r=1e7;
		int mark[40000]={0};
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> tmp;
			l=max(l, tmp);
			r=min(r, tmp);
			mark[tmp]=1;
		}
		
		int cnt=0;
		for(int i=r; i<=l; i++){
			if(mark[i]==0) ++cnt;
		}
		cout << cnt << "\n";
	}
	return 0;
}
