#include<bits/stdc++.h>
using namespace std;

int n, a[100005];

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		
		int s1=0, s2=0;
		for(int i=1; i<n; i++){
			s2+=a[i];
		}
		if(s1==s2) cout << 1 << "\n";
		else{
			int ok=0;
			for(int i=1; i<n; i++){
				s1+=a[i-1];
				s2-=a[i];
				if(s1==s2){
					cout << i+1 << "\n";
					ok=1; break;
				}
			}
			if(!ok) cout << -1 << "\n";
		}
	}
	return 0;
}
