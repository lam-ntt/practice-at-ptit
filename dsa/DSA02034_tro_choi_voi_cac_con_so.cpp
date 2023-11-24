#include<bits/stdc++.h>
using namespace std;

int n, a[15], mark[15], ok;

void readAndInit(){
	cin >> n;
	ok=0;
	for(int i=1; i<=n; i++){
		mark[i]=0;
	}
}

void check(){
	for(int i=1; i<n; i++){
		if(abs(a[i]-a[i+1])==1) return;
	}
	
	for(int i=1; i<=n; i++){
		cout << a[i];
	}
	cout << "\n";
	ok=1;
}

void tryy(int i){
	for(int j=1; j<=n; j++){
		if(mark[j]==0){
			a[i]=j;
			mark[j]=1;
			if(i==n) check();
			else tryy(i+1);
			mark[j]=0;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		readAndInit();
		tryy(1);
		if(!ok) cout << "\n";
	}
	return 0;
}
