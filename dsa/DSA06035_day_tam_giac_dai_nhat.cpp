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
		
		int tmp=0;
		for(int i=0; i<n; i++){
			if(a[i]>a[i+1]) ++tmp;
		}
		if(tmp==n-1) cout << n << "\n";
		else{
			int pos=0;
			while(a[pos+1]<=a[pos]) ++pos;
			
			int res=1, cnt=1, ok=0;
			for(int i=pos+1; i<n; i++){
				if(ok==0){
					if(a[i]>a[i-1]) ++cnt;
					else{
						ok=1;
						--i;
					}
				}else{
					if(a[i]<a[i-1]) ++cnt;
					else{
						ok=0; cnt=2;
					}
				}
				res=max(res, cnt);
			}
			cout << res << "\n";	
		}
	}
	return 0;
}
