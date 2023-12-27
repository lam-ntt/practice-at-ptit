#include<bits/stdc++.h>
using namespace std;

int a[1000005];
int k, x;

int cmp(int a, int b){
	return abs(a-x)<abs(b-x);
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		cin >> k >> x;
		sort(a, a+n, cmp);
		if(a[0]!=x){
			continue;
		}
		
		int cnt=0; 
		while(a[cnt]==x){
			++cnt;
		}
		k+=cnt;
		
		vector<int> v;
		while(cnt<k&&cnt<n){
			v.push_back(a[cnt++]);
		}
		sort(v.begin(), v.end());
		for(auto it: v){
			cout << it << " ";
		}
		cout << "\n";
	}
	return 0;
}
