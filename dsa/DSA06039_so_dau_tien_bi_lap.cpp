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
		
		int ok=0;
		for(int i=0; i<n; i++){
			if(mp[a[i]]>1){
				cout << a[i] << "\n";
				ok=1; break;
			}
		}
		if(!ok) cout << "NO\n";
	}
	return 0;
}
