#include<bits/stdc++.h>
using namespace std;

int n, A[105], s, ok, a[105];

void tryy(int i){
	for(int j=1; j>=0; j--){
		a[i]=j;
		s-=a[i]*A[i];
		if(s==0){
			ok=1;
			return;
		}
		else if(i<n&&s>0) tryy(i+1);
		s+=a[i]*A[i];
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n; s=0;
		for(int i=1; i<=n; i++){
			cin >> A[i];
			s+=A[i];
		}
		sort(A+1, A+n+1, greater<int>());
		
		if(s%2==1){
			cout << "NO\n";
		}else{
			s=s/2; ok=0;
			tryy(1);
			if(ok) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	return 0;
}
