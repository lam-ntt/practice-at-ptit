#include<bits/stdc++.h>
using namespace std;

int a[100005];

int check(int s, int f, int l){
	if(f>l){
		return 0;
	}
	if(s==a[(f+l)/2]){
		return 1;
	}else{
		if(s<a[f+l]/2){
			return check(s, f, (f+l)/2-1);
		}else{
			return check(s, (f+l)/2+1, l);
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		vector<int> v;
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(a[i]>k){
				v.push_back(a[i]-k);
			}
		}
		sort(a, a+n);
		
		int ok=0;
		for(int i=0; i<v.size(); i++){
			if(check(v[i], 0, n-1)){
				cout << "1\n"; ok=1;
				break;
			}
		}
		if(!ok){
			cout << "-1\n";
		}
	}
	return 0;
}
