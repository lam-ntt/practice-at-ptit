#include<bits/stdc++.h>
using namespace std;

int n, a[25], A[25];
set<string> st;

void read(){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> A[i];
	}
}

void check(){
	int cnt=0;
	for(int i=1; i<=n; i++){
		if(a[i]) ++cnt;
	}
	if(cnt<2) return;
	
	int tmp=-1;
	for(int i=1; i<=n; i++){
		if(a[i]){
			if(A[i]>=tmp) tmp=A[i];
			else return;
		}
	}
	
	string s="";
	for(int i=1; i<=n; i++){
		if(a[i]){
			s+=to_string(A[i]);
			s+=" ";
		}
	}
	st.insert(s);
}

void tryy(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n) check();
		else tryy(i+1);
	}
}

void print(){
	for(auto it: st){
		cout << it << "\n";
	}
}

int main(){
	read();
	tryy(1);
	print();
}
