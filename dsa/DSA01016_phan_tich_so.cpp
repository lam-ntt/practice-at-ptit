#include<bits/stdc++.h>
using namespace std;

int n, cnt, a[15];

void readAndInit(){
	cin >> n;
	a[1]=n;
	cnt=1;
}

void print(){
	cout << "(";
	for(int i=1; i<cnt; i++){
		cout << a[i] << " ";
	}
	cout << a[cnt] << ") ";
}

void gen(){
	while(1){
		print();
		int i=cnt;
		while(i>=1&&a[i]==1){
			--i;
		}
		if(i==0) return;
		else{
			int sum=a[i]+cnt-i;
			cnt=i;
			--a[i];
			int q=sum/a[i];
			int p=sum%a[i];
			for(int j=1; j<=q; j++){
				a[cnt++]=a[i];
			}
			if(p!=0) a[cnt]=p;
			else --cnt;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		readAndInit();
		gen();
		cout << "\n";
	}
	return 0;
}


