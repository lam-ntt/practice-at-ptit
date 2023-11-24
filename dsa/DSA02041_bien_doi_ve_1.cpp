#include<bits/stdc++.h>
using namespace std;

int n, record;

void tryy(int i){
	if(n==1) record=min(record, i-1);
	if(n<1||i>record) return;
	
	if(n%3==0){
		n/=3;
		tryy(i+1);
		n*=3;
	}
	if(n%2==0){
		n/=2;
		tryy(i+1);
		n*=2;
	}
	if(1){
		n-=1;
		tryy(i+1);
		n+=1;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		record=100000;
		tryy(1);
		cout << record << "\n";
	}
	return 0;
}
