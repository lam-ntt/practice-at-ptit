#include<bits/stdc++.h>
#define ll long long
using namespace std;

string s; 
int n, mn, a[15], mark[15];

void check(){
	int tmp=a[0];
	for(int i=1; i<n; i++){
		if(s[i-1]=='I'&&a[i]<a[i-1]) return;
		if(s[i-1]=='D'&&a[i]>a[i-1]) return;
		tmp=tmp*10+a[i];
	}
	mn=min(mn, tmp);
}

void tryy(int i){
	for(int j=1; j<=9; j++){
		if(mark[j]==0){
			a[i]=j;
			mark[j]=1;
			if(i==n-1) check();
			else tryy(i+1);
			mark[j]=0;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> s;
		n=s.size()+1;
		
		mn=1e9;
		for(int i=0; i<10; i++) mark[i]=0;
		tryy(0);
		cout << mn << "\n";
	}
	return 0;
}
