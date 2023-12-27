#include<bits/stdc++.h>
using namespace std;

int a[100005];

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		sort(a, a+n);
		vector<int> v;
		for(int i=0; i<n-1; i++){
			a[i]=a[i+1]-a[i];
			if(a[i]!=0){
				v.push_back(a[i]);
			}
		}
		if(v.size()==0){
			cout << "0\n"; break;
		}
		
		int tmp=v[0];
		for(int i=1; i<v.size(); i++){
			tmp=__gcd(tmp, v[i]);
		}
		
		int cnt=0;
		for(int i=1; i<=sqrt(tmp); i++){
			if(tmp%i==0){
				cnt+=2;
			}
		}
		int m=(int)sqrt(tmp);
		if(m*m==tmp){
			--cnt;
		}
		cout << cnt << "\n";
	}
	return 0;
}
