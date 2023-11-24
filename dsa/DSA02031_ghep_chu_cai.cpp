#include<bits/stdc++.h>
using namespace std;

int n, a[10], mark[10];

void readAndInit(){
	char t; cin >> t;
	n=t-'A'+1;
	for(int i=1; i<=n; i++){
		mark[i]=0;
	}
}

void check(){
	for(int i=2; i<n; i++){
		if(a[i]==1||a[i]==5){
			if(!(a[i-1]==1||a[i-1]==5||a[i+1]==1||a[i+1]==5)) return;
		}
	}
	
	for(int i=1; i<=n; i++){
		cout << (char)(a[i]+'A'-1);
	}
	cout << "\n";
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
	readAndInit();
	tryy(1);
	return 0;
}
