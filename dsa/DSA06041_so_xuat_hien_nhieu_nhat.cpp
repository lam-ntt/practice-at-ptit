#include<bits/stdc++.h>
using namespace std;

int n, a[100005];
map<int, int> mp;

int main(){
	int t; cin >> t;
	while(t--){
		mp.clear();
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		
		int idx=-1, max=0;
		for(int i=0; i<n; i++){
			if(mp[a[i]]>n/2&&mp[a[i]]>max){
				max=mp[a[i]];
				idx=i;
			}
		}
		if(idx==-1) cout << "NO\n";
		else cout << a[idx] << "\n";
	}
	return 0;
}
