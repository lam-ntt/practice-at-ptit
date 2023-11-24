#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
			b[i]=a[i];
		}
		sort(b, b+n);
		
		int pos; map<int, int> mp; 
		int record=-1, cnt=0; vector<int> res;
		for(int i=0; i<n; i++){
			pos=lower_bound(b, b+n, a[i])-b;
			while(mp[pos]){
				++pos;
			}
			mp[pos]=1;
			
			record=max(record, pos);
			if(record==i){
				++cnt;
				res.push_back(i+1);
			}
		}
		
		cout << cnt << "\n";
		for(auto it: res){
			cout << it << " ";
		}
		cout << "\n";
	}
	return 0;
}
