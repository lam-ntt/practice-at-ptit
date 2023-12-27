#include<bits/stdc++.h>
using namespace std;

int a[10000005];

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		
		int min=a[0], cnt=1;
		while(a[cnt]==a[0]&&cnt<n){
			++cnt;
		}
		if(a[cnt]!=min&&cnt<n){
			cout << min << " " << a[cnt] << "\n";
		}else{
			cout << "-1\n";
		}
		
	}
	return 0;
}
