#include<bits/stdc++.h>
using namespace std;

int n, k, a[35]; 
string s[35];

void read(){
	cin >> n >> k;
	string tmp; set<string> st;
	for(int i=1; i<=n; i++){
		cin >> tmp;
		st.insert(tmp);
	}
	
	int cnt=1;
	for(auto it: st){
		s[cnt++]=it;
	}
	n=cnt-1;
}

void print(){
	for(int i=1; i<=k; i++){
		cout << s[a[i]] << " ";
	}
	cout << "\n";
}

void tryy(int i){
	for(int j=a[i-1]+1; j<=n; j++){
		a[i]=j;
		if(i==k) print();
		else tryy(i+1);
	}
}
int main(){
	read();
	tryy(1);
	return 0;
}
