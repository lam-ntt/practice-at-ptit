#include<bits/stdc++.h>
using namespace std;

int n, a[10];

void print(){
	for(int i=1; i<=8; i++){
		cout << a[i];
		if(i==2||i==4) cout << "/";
	}
	cout << "\n";
}

void check(){
	if(a[1]==0&&a[2]==0) return;
	if(a[3]!=0||a[4]!=2) return;
	if(a[5]==0) return;
	print();
}

void tryy(int i){
	for(int j=0; j<=2; j+=2){
		a[i]=j;
		if(i==8) check();
		else tryy(i+1);
	}
}

int main(){
	tryy(1);
	return 0;
}
