#include<bits/stdc++.h>
using namespace std;

int a[15], mark[15];
string s;

void readAndInit(){
	cin >> s;
	for(int i=1; i<=s.size(); i++){
		mark[i]=0;
	}
}

void print(){
	for(int i=1; i<=s.size(); i++){
		cout << s[a[i]-1];
	}
	cout << " ";
}

void tryy(int i){
	for(int j=1; j<=s.size(); j++){
		if(mark[j]==0){
			a[i]=j;
			mark[j]=1;
			if(i==s.size()) print();
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
		cout << "\n";
	}
	return 0;
}
