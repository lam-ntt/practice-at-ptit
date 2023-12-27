#include<bits/stdc++.h>
using namespace std;

int mark[100005];

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n; int tmp;
		for(int i=1; i<=100000; i++){
			mark[i]=0;
		}
		
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >> tmp;
				if(mark[tmp]==i){
					++mark[tmp];
				}
			}
		}
		
		int cnt=0;
		for(int i=1; i<=100005; i++){
			if(mark[i]==n){
				++cnt;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}
